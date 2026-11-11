# Cautare binara intr-o lista sortata
n = int(input("n = "))
text = input("Elemente sortate: ")
values = [int(x) for x in text.split()][:n]
target = int(input("Valoarea cautata: "))

low, high = 0, n - 1
position, steps = -1, 0
while low <= high:
    mid = (low + high) // 2
    steps += 1
    if values[mid] == target:
        position = mid
        break
    elif values[mid] < target:
        low = mid + 1          # dreapta
    else:
        high = mid - 1         # stanga
print(f"Pozitia: {position}, pasi: {steps}")
