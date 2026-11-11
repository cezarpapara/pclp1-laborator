# Tipuri de date in Python: dinamice
letter = "A"
big = 2**31 - 1   # INT_MAX din C

print(type(letter), type(big), type(0.5))
print(f"'{letter}' are codul {ord(letter)}")
print(f"INT_MAX + 1 = {big + 1}")
print(f"2 la puterea 100 = {2**100}")
print(f"0.1 + 0.2 = {0.1 + 0.2:.17f}")
