# Matrice patratica: diagonale, transpusa
n = int(input("n = "))
print("Elementele, pe linii:")
a = [[int(x) for x in input().split()]
     for _ in range(n)]

main_sum = sum(a[i][i] for i in range(n))
secondary_sum = sum(a[i][n - 1 - i]
                    for i in range(n))
print(f"Diagonala principala: {main_sum}")
print(f"Diagonala secundara: {secondary_sum}")

print("Transpusa:")
for i in range(n):
    print("".join(f"{a[j][i]:4d}"
                  for j in range(n)))
