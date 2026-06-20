import random
import string

# Password length
length = 12

# Characters to use
characters = string.ascii_letters + string.digits + string.punctuation

# Generate password
password = ''.join(random.choice(characters) for _ in range(length))

print("Generated Password:", password)
