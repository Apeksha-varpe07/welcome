from sympy import Point, Line

P = Point(0, 0)
Q = Point(5, 5)

line = Line(P, Q)

print("Slope:", line.slope)
print("Equation:", line.equation())
