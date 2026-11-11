# Bubble sort si sorted() din biblioteca
def bubble_sort(values):
    n = len(values)
    swapped = True
    pass_number = 0
    while swapped:
        swapped = False
        for i in range(n - 1 - pass_number):
            if values[i] > values[i + 1]:
                values[i], values[i + 1] = \
                    values[i + 1], values[i]
                swapped = True
        pass_number += 1


a = [29, 3, 17, 8, 42, 1, 15]
b = sorted(a)      # lista noua, sortata
bubble_sort(a)     # sorteaza pe loc
print(*a)     # elementele, separate prin spatiu
print(*b)
