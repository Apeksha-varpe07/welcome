numbers = []

n = int(input("How many numbers? "))

for i in range(n):
    num = int(input("Enter number: "))
    numbers.append(num)

numbers.sort()

print("Sorted list:", numbers)
