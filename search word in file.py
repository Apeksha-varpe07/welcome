word = input("Enter word to search: ")

f = open("sample.txt", "r")
data = f.read()

if word in data:
    print("Word Found")
else:
    print("Word Not Found")

f.close()
