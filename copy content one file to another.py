source = open("sample.txt", "r")
destination = open("copy.txt", "w")

data = source.read()
destination.write(data)

source.close()
destination.close()

print("File copied successfully.")
