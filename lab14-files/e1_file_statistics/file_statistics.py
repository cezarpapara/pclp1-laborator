# with: fisierul se inchide automat
try:
    with open("numbers.txt") as source:
        text = source.read()
except FileNotFoundError:
    print("Nu pot citi numbers.txt")
    raise SystemExit(1)

values = [int(token) for token in text.split()]
if not values:
    print("Fisierul nu contine numere")
    raise SystemExit(1)

with open("report.txt", "w") as output:
    output.write(f"Numere: {len(values)}\n")
    output.write(f"Suma: {sum(values)}\n")
    output.write(f"Minim: {min(values)}\n")
    output.write(f"Maxim: {max(values)}\n")
    average = sum(values) / len(values)
    output.write(f"Media: {average:.2f}\n")

print("Raport scris in report.txt")
