from sympy import Point, Line

A = Point(1, 2)
B = Point(4, 6)

print("Distance:", A.distance(B))

line = Line(A, B)
print("Slope:", line.slope)
print("Equation:", line.equation())
