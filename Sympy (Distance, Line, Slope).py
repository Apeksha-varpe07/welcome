from sympy import Point, Line

P = Point(7, 2)
Q = Point(1, 8)

# Distance
distance = P.distance(Q)

# Line
line = Line(P, Q)

# Slope
slope = line.slope

# Equation
equation = line.equation()

print("Distance:", distance)
print("Slope:", slope)
print("Equation:", equation)
