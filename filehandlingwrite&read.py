# Writing to file
file = open("data.txt", "w")
file.write("Hello, this is Python file handling!")
file.close()

# Reading from file
file = open("data.txt", "r")
content = file.read()
print(content)
file.close()
