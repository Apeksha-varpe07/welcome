a=int(input("enter a first number:"))
b=int(input("enter a second number:"))
c=int(input("enter a third number:"))

if(a>=b and a>=c):
    print("the first no is largest",a)
elif(b>=c):
    print("the second no is largest",b)
else:
    print("the third no is largest",c)
