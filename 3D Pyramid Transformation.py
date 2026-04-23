import numpy as np

# Points
O = np.array([0,0,0])
A = np.array([1,1,0])
B = np.array([0,1,0])
C = np.array([0,0,1])

# Rotation about X-axis (90°)
# (x, y, z) → (x, -z, y)
def rotate_x(p):
    return np.array([p[0], -p[2], p[1]])

A1 = rotate_x(A)
B1 = rotate_x(B)
C1 = rotate_x(C)

# Reflection in XY-plane (z → -z)
A2 = [A1[0], A1[1], -A1[2]]
B2 = [B1[0], B1[1], -B1[2]]
C2 = [C1[0], C1[1], -C1[2]]

print("Transformed Points:")
print("A:", A2)
print("B:", B2)
print("C:", C2)
