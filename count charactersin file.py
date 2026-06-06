f = open("sample.txt", "r")

data = f.read()

print("Total Characters:", len(data))
f.close()
