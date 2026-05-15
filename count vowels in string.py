string = input("Enter string: ")
count = 0

for ch in string:
    if ch.lower() in "aeiou":
        count += 1

print("Vowels =", count)
