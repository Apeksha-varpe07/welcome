from sympy import Point

P = Point(1, 3)

# Reflection in y = x
P1 = Point(P.y, P.x)

# Reflection in y = -x
P2 = Point(-P.y, -P.x)

print("Reflection y=x:", P1)
print("Reflection y=-x:", P2)
