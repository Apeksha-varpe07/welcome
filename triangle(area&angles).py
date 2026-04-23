from sympy import Point, Triangle

A = Point(2, 3)
B = Point(5, 1)
C = Point(7, 6)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Angles:", t.angles)
