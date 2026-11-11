# Calculator simplu cu match (Python 3.10+)
tokens = input("Expresie (ex. 12 / 4): ").split()
a = float(tokens[0])
op = tokens[1]
b = float(tokens[2])

match op:
    case "+":
        print(f"= {a + b:.2f}")
    case "-":
        print(f"= {a - b:.2f}")
    case "*":
        print(f"= {a * b:.2f}")
    case "/":
        if b == 0:
            print("Eroare: impartire la 0")
        else:
            print(f"= {a / b:.2f}")
    case _:
        print(f"Operator necunoscut: {op}")
