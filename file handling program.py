# Write and Read a File

file = open("sample.txt", "w")
file.write("Hello Python\n")
file.write("File Handling Example")
file.close()

file = open("sample.txt", "r")
content = file.read()
print(content)
file.close()
