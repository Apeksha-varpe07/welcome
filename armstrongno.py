num = int(input("Enter number: "))
temp = num
sum = 0

while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

if num == sum:
    print("Armstrong")
else:
    print("Not Armstrong")
