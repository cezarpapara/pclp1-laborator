# Sirurile (str) sunt imutabile in Python
def is_vowel(ch):
    return ch.lower() in "aeiou"


text = input("Text: ")
vowels = 0
for ch in text:
    if is_vowel(ch):
        vowels += 1

print(f"Lungime: {len(text)}")
print(f"Vocale: {vowels}")
print(f"Majuscule: {text.upper()}")
