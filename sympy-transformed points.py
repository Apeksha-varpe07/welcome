from sympy import Point

P = Point(5, -8)

# Reflection (y-axis)
P1 = Point(-P.x, P.y)

# Scaling
P2 = Point(P.x * 4, P.y * 1)

# Rotation (90°)
P3 = Point(-P.y, P.x)

print("Reflection:", P1)
print("Scaling:", P2)
print("Rotation:", P3)
