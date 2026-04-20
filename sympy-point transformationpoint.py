from sympy import Point

P = Point(1, 6)

# Shearing (x-direction)
P1 = Point(P.x + 5*P.y, P.y)

# Reflection (y-axis)
P2 = Point(-P1.x, P1.y)

# Translation
P3 = Point(P2.x + 1, P2.y + 4)

print("Final Point:", P3)
