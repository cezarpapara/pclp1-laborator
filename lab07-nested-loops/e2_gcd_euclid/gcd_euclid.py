# cmmdc si cmmmc prin algoritmul lui Euclid
text = input("a b (numere pozitive): ")
a, b = map(int, text.split())

x, y = a, b
while y != 0:
    x, y = y, x % y
gcd = x
lcm = a // gcd * b
# varianta din biblioteca: math.gcd(a, b)

print(f"cmmdc({a}, {b}) = {gcd}")
print(f"cmmmc({a}, {b}) = {lcm}")
