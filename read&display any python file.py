filename = input("Enter Python File Name: ")

file = open(filename, "r")

print(file.read())

file.close()
