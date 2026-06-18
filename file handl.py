# Write to file
file = open("sample.txt", "w")
file.write("Hello Python")
file.close()

# Read from file
file = open("sample.txt", "r")
print(file.read())
file.close()
