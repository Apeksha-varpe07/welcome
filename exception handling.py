try:
    a = int(input("Enter First Number: "))
    b = int(input("Enter Second Number: "))

    result = a / b
    print("Result =", result)

except ZeroDivisionError:
    print("Cannot Divide by Zero")

except ValueError:
    print("Invalid Input")
