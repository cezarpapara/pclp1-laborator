# Tipare alternative (|) si garzi (if) in match
text = input("Luna si anul: ")
month, year = map(int, text.split())
leap = (year % 4 == 0 and year % 100 != 0) \
    or year % 400 == 0

match month:
    case 1 | 3 | 5 | 7 | 8 | 10 | 12:
        days = 31
    case 4 | 6 | 9 | 11:
        days = 30
    case 2 if leap:
        days = 29
    case 2:
        days = 28
    case _:
        days = 0

if days == 0:
    print("Luna invalida")
else:
    print(f"Are {days} de zile")
