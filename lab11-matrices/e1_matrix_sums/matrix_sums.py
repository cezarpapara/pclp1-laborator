# Matrice: lista de liste
text = input("Linii si coloane: ")
rows, cols = map(int, text.split())
print("Elementele, pe linii:")
a = [[int(x) for x in input().split()]
     for _ in range(rows)]

for row in a:
    line = "".join(f"{value:4d}" for value in row)
    print(f"{line} | {sum(row)}")

col_sums = [sum(a[i][j] for i in range(rows))
            for j in range(cols)]
print("".join(f"{s:4d}" for s in col_sums))
