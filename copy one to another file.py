source = open("sample.txt", "r")
data = source.read()
source.close()

target = open("copy.txt", "w")
target.write(data)
target.close()

print("File copied successfully.")
