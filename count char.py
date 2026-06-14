f = open("sample.txt", "r")
data = f.read()

print("Total characters:", len(data))
f.close()
