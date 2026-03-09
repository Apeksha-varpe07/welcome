a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")

choice = int(input("Enter your choice: "))

if choice == 1:
    print("Addition =", a + b)
elif choice == 2:
    print("Subtraction =", a - b)
elif choice == 3:
    print("Multiplication =", a * b)
elif choice == 4:
    print("Division =", a / b)
else:
    print("Invalid choice")
