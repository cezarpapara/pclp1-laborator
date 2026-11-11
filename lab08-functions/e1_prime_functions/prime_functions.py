# Descompunerea programului in functii
def is_prime(n):
    """Intoarce True daca n este prim."""
    if n < 2:
        return False
    d = 2
    while d * d <= n:
        if n % d == 0:
            return False
        d += 1
    return True


def main():
    text = input("Intervalul [a, b]: ")
    low, high = map(int, text.split())

    primes = [k for k in range(low, high + 1)
              if is_prime(k)]
    print("Numere prime:", *primes)
    print(f"Total: {len(primes)}")


if __name__ == "__main__":
    main()
