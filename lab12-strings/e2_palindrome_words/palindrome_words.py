# Numararea cuvintelor; test de palindrom
def count_words(text):
    return len(text.split())


def is_palindrome(text):
    letters = [ch.lower() for ch in text
               if ch.isalnum()]
    return letters == letters[::-1]   # inversare


text = input("Text: ")
print(f"Cuvinte: {count_words(text)}")
answer = "da" if is_palindrome(text) else "nu"
print(f"Palindrom: {answer}")
