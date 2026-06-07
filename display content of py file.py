filename = input("Enter Python file name: ")

f = open(filename, "r")
print(f.read())
f.close()
