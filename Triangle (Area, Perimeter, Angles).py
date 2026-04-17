from sympy import Point, Triangle

A = Point(3, 0)
B = Point(0, 4)
C = Point(-3, 0)

triangle = Triangle(A, B, C)

print("Area:", triangle.area)
print("Perimeter:", triangle.perimeter)
print("Angles:", triangle.angles)
