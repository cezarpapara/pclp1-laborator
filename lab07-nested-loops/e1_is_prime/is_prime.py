# Numar prim: cautam un divizor pana la radical
n = int(input("n = "))

is_prime = n >= 2
d = 2
while d * d <= n:
    if n % d == 0:
        is_prime = False
        break               # oprim cautarea
    d += 1

if is_prime:
    print(f"{n} este prim")
else:
    print(f"{n} nu este prim")
