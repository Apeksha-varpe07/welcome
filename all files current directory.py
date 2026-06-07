import os

files = os.listdir()

for file in files:
    print(file)

print("Total Files:", len(files))
