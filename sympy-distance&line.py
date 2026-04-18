from sympy import Point, Line

P = Point(2, 3)
Q = Point(6, 7)

print("Distance:", P.distance(Q))

line = Line(P, Q)
print("Slope:", line.slope)
print("Equation:", line.equation())
