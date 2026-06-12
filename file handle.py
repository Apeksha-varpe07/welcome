f = open("sample.txt", "w")
f.write("Welcome to Python Programming")
f.close()

f = open("sample.txt", "r")
print(f.read())
f.close()
