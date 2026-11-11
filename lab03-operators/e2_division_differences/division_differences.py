# Impartirea intreaga si restul in Python
import math

a, b = map(int, input("a b: ").split())

print(f"{a} // {b} = {a // b}")
print(f"{a} % {b} = {a % b}")
print(f"{a} / {b} = {a / b:.2f}")
# echivalentele comportamentului din C:
print(f"int({a} / {b}) = {int(a / b)}")
print(f"math.fmod({a}, {b}) = {math.fmod(a, b)}")
