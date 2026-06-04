file = open("sample.txt", "r")

lines = file.readlines()

print("Total Lines:", len(lines))

file.close()
