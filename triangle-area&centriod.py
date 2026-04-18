from sympy import Point, Triangle

A = Point(2, 2)
B = Point(6, 2)
C = Point(4, 6)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Centroid:", t.centroid)
