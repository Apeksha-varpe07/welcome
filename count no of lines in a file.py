f = open("sample.txt", "r")

count = 0
for line in f:
    count += 1

print("Total Lines:", count)
f.close()
