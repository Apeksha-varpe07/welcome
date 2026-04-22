from sympy import Point, Line

A = Point(2, 3)
B = Point(6, 7)

line = Line(A, B)

print("Slope:", line.slope)
print("Equation:", line.equation())
