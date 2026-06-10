num = int(input("Enter a number: "))
temp = num
sum = 0

while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

if num == sum:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")
