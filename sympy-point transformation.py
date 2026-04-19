from sympy import Point

P = Point(3, 4)

# Reflection (y-axis)
P1 = Point(-P.x, P.y)

# Scaling
P2 = Point(P.x * 2, P.y * 3)

# Translation
P3 = Point(P.x + 5, P.y + 2)

print("Reflection:", P1)
print("Scaling:", P2)
print("Translation:", P3)
