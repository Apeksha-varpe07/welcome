from sympy import Point, Triangle

A = Point(1, 2)
B = Point(5, 2)
C = Point(3, 6)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Perimeter:", t.perimeter)
