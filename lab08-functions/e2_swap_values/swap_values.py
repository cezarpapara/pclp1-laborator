# Python transmite referinte la obiecte;
# int este imutabil, deci functia nu poate
# modifica variabilele apelantului.
def swap_attempt(a, b):
    a, b = b, a        # schimba doar numele locale


def swapped(a, b):
    return b, a        # intoarce un tuplu


x, y = 3, 7
swap_attempt(x, y)
print(f"in functie: x={x} y={y}")
x, y = swapped(x, y)
print(f"prin tuplu: x={x} y={y}")
