# Citire pana la valoarea santinela 0
count, total, maximum = 0, 0, 0

value = int(input("Numar (0 = stop): "))
while value != 0:
    if count == 0 or value > maximum:
        maximum = value
    total += value
    count += 1
    value = int(input("Numar (0 = stop): "))

if count == 0:
    print("Nu s-a citit niciun numar")
else:
    print(f"Numere: {count}")
    print(f"Media: {total / count:.2f}")
    print(f"Maximul: {maximum}")
