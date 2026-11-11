# Calificativul corespunzator unei note
grade = int(input("Nota (1-10): "))

if grade < 1 or grade > 10:
    print("Nota invalida")
elif grade < 5:
    print("Insuficient")
elif grade <= 6:
    print("Suficient")
elif grade <= 8:
    print("Bine")
else:
    print("Foarte bine")
