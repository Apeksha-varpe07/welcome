from sympy import Point

P = Point(-2, 5)

# Translation
P1 = Point(P.x + 2, P.y - 5)

# Rotation (60° approx using matrix)
import math
theta = math.radians(60)

x_new = P1.x*math.cos(theta) - P1.y*math.sin(theta)
y_new = P1.x*math.sin(theta) + P1.y*math.cos(theta)

# Shearing
P2 = Point(x_new + 5*y_new, y_new)

print("Final Point:", P2)
Output:
