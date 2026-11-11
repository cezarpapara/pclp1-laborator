# Aplicatie: clasamentul unei grupe
from dataclasses import dataclass

PASS_MARK = 5.0


@dataclass
class Student:
    name: str
    average: float


def read_students(path):
    students = []
    with open(path) as file:
        for line in file:
            name, *grades = line.split()
            values = [float(g) for g in grades]
            average = sum(values) / len(values)
            students.append(Student(name, average))
    return students


def write_ranking(path, students):
    passed = 0
    with open(path, "w") as file:
        for pos, s in enumerate(students, 1):
            ok = s.average >= PASS_MARK
            passed += ok
            status = "promovat" if ok \
                else "nepromovat"
            avg = f"{s.average:.2f}"
            file.write(f"{pos}. {s.name} {avg} "
                       f"{status}\n")
    return passed


def main():
    try:
        students = read_students("students.txt")
    except FileNotFoundError:
        print("Nu pot citi students.txt")
        return
    # media descrescator, apoi numele crescator
    students.sort(key=lambda s: (-s.average,
                                 s.name))
    passed = write_ranking("ranking.txt", students)
    print(f"Studenti: {len(students)}, "
          f"promovati: {passed}")
    print("Clasament scris in ranking.txt")


if __name__ == "__main__":
    main()
