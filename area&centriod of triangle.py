from sympy import Point, Triangle

A = Point(10, 5)
B = Point(-7, 4)
C = Point(8, -3)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Centroid:", t.centroid)
