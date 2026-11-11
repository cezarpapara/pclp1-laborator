# Conversia temperaturii din grade Celsius
KELVIN_OFFSET = 273.15

celsius = float(input("Grade Celsius: "))

fahrenheit = celsius * 9.0 / 5.0 + 32.0
kelvin = celsius + KELVIN_OFFSET

print(f"Fahrenheit: {fahrenheit:.2f}")
print(f"Kelvin: {kelvin:.2f}")
