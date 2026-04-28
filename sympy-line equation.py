Python Code:
from sympy import Point, Line

P = Point(10, 5)
Q = Point(-7, 4)

line = Line(P, Q)

print("Slope:", line.slope)
print("Equation:", line.equation())
