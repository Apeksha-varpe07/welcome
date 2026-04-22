from sympy import Point, Triangle

A = Point(1, 6)
B = Point(0, 8)
C = Point(5, 3)

t = Triangle(A, B, C)

print("Area:", t.area)
print("Centroid:", t.centroid)
print("Perimeter:", t.perimeter)
