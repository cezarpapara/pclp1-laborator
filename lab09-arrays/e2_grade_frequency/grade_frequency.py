# dict: tablou asociativ cheie -> valoare
n = int(input("Numarul de note: "))
values = input("Notele: ").split()

frequency = {}
for i in range(n):
    grade = int(values[i])
    frequency[grade] = frequency.get(grade, 0) + 1

for grade in sorted(frequency):
    print(f"Nota {grade}: {frequency[grade]}")
