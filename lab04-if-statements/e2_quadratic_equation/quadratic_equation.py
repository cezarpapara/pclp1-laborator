# Ecuatia a*x^2 + b*x + c = 0
import math

a, b, c = map(float, input("a b c: ").split())

if a == 0:                    # gradul 1
    if b != 0:
        print(f"x = {-c / b:.2f}")
    elif c == 0:
        print("Orice x este solutie")
    else:
        print("Nu exista solutii")
else:                         # gradul 2
    delta = b * b - 4 * a * c
    if delta < 0:
        print("Nu are solutii reale")
    elif delta == 0:
        x = -b / (2 * a)
        print(f"x1 = x2 = {x:.2f}")
    else:
        root = math.sqrt(delta)
        x1 = (-b - root) / (2 * a)
        x2 = (-b + root) / (2 * a)
        print(f"x1 = {x1:.2f}\nx2 = {x2:.2f}")
