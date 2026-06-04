source = open("source.txt", "r")
destination = open("dest.txt", "w")

destination.write(source.read())

source.close()
destination.close()

print("File Copied")
