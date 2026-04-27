from sympy import Point, Triangle

A = Point(0, 0)
B = Point(8, -9)
C = Point(7, 4)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Perimeter:", t.perimeter)
Output:
