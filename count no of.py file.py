import os

count = 0

for file in os.listdir():
    if file.endswith(".py"):
        count += 1

print("Total .py Files:", count)
