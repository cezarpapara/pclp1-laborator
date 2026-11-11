# dataclass: o "inregistrare" cu campuri numite
from dataclasses import dataclass


@dataclass
class Student:
    name: str
    grade: float


n = int(input("Numarul de studenti: "))
students = []
for _ in range(n):
    name, grade = input("Nume si nota: ").split()
    students.append(Student(name, float(grade)))

total = sum(s.grade for s in students)
best = max(students, key=lambda s: s.grade)
print(f"Media grupei: {total / n:.2f}")
print(f"Cel mai bun: {best.name} "
      f"({best.grade:.2f})")
