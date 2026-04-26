from sympy import Point, Triangle

A = Point(4, 4)
B = Point(-4, 4)
C = Point(-4, -4)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Centroid:", t.centroid)
