from sympy import Point, Triangle

A = Point(2, 2)
B = Point(4, 2)
C = Point(3, 6)

triangle = Triangle(A, B, C)

# Centroid
centroid = triangle.centroid

# Translation (x + 2)
A1 = A.translate(2, 0)
B1 = B.translate(2, 0)
C1 = C.translate(2, 0)

print("Centroid:", centroid)
print("Translated Points:", A1, B1, C1)
