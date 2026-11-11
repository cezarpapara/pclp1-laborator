# Python nu are pointeri expliciti: variabilele
# sunt nume (referinte) catre obiecte.
a = [4, 8, 15]
b = a              # b si a numesc ACELASI obiect
b[0] = 99
print(f"a = {a}, b = {b}")
print(f"acelasi obiect: {a is b}")

c = list(a)        # copie: obiect nou
c[0] = 1
print(f"a = {a}, c = {c}")
print(f"acelasi obiect: {a is c}")
