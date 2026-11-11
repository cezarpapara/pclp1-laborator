# Lista (list): tablou dinamic in Python
n = int(input("Numarul de note: "))
values = input("Notele: ").split()
grades = [int(values[i]) for i in range(n)]

minimum = maximum = grades[0]
total = 0
for grade in grades:           # "for each"
    total += grade
    if grade < minimum:
        minimum = grade
    if grade > maximum:
        maximum = grade
# echivalent: min(grades), max(grades), sum(grades)
average = total / n

above = 0
for grade in grades:
    if grade > average:
        above += 1
print(f"Minim: {minimum}, maxim: {maximum}")
print(f"Media: {average:.2f}")
print(f"Peste medie: {above}")
