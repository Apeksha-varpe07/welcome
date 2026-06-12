f = open("sample.txt", "r")

data = f.read()

lines = data.split('\n')
words = data.split()

print("Lines:", len(lines))
print("Words:", len(words))
print("Characters:", len(data))

f.close()
