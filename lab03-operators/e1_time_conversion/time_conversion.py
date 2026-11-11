# Secunde -> ore:minute:secunde
SECONDS_PER_MINUTE = 60
SECONDS_PER_HOUR = 3600

total = int(input("Numar de secunde: "))

hours = total // SECONDS_PER_HOUR
rest = total % SECONDS_PER_HOUR
minutes = rest // SECONDS_PER_MINUTE
seconds = rest % SECONDS_PER_MINUTE

print(f"{total} s = "
      f"{hours:02d}:{minutes:02d}:{seconds:02d}")
