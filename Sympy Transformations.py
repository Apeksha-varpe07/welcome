from sympy import Point

P = Point(-4, 5)

# Scaling in x by 2
P1 = Point(P.x * 2, P.y)

# Reflection through y = x
P2 = Point(P.y, P.x)

# Translation in y by 7
P3 = Point(P.x, P.y + 7)

print("Scaled:", P1)
print("Reflected (y=x):", P2)
print("Translated:", P3)
