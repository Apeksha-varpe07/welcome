import numpy as np

P = np.array([5, -8])

# 1. Reflection (y-axis)
p1 = P * [-1, 1]

# 2. Scaling
p2 = p1 * [4, 1]

# 3. Rotation (90°)
R = np.array([[0,-1],[1,0]])
p3 = p2 @ R

print("Original Point:", P)
print("Transformed Point:", p3)
