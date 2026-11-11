# Factorial si Fibonacci recursiv
def factorial(n):
    if n <= 1:
        return 1                   # cazul de baza
    return n * factorial(n - 1)    # autoapel


def fibonacci(n):
    if n < 2:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)


n = int(input("n = "))
print(f"{n}! = {factorial(n)}")
print(f"F({n}) = {fibonacci(n)}")
