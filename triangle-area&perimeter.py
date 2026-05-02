from sympy import Point, Triangle

A = Point(1, 3)
B = Point(3, 3)
C = Point(4, 5)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Perimeter:", t.perimeter)
