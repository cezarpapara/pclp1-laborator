# Suma 1 + 2 + ... + n; do-while nu exista
# in Python: se simuleaza cu while True/break
while True:
    n = int(input("n (n > 0): "))
    if n > 0:
        break

sum_for = 0
for i in range(1, n + 1):   # i = 1, 2, ..., n
    sum_for += i

sum_while = 0
k = 1
while k <= n:
    sum_while += k
    k += 1                  # nu exista k++

gauss = n * (n + 1) // 2
print(f"for: {sum_for}")
print(f"while: {sum_while}")
print(f"Gauss: {gauss}")
