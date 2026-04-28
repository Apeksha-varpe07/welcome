import numpy as np
import matplotlib.pyplot as plt

points = np.array([[10,5], [-7,4], [8,-3], [10,5]])

# 1. Reflection (y-axis)
p1 = points * [-1,1]

# 2. Rotation (90°)
R = np.array([[0,-1],[1,0]])
p2 = p1 @ R

# 3. Scaling
p3 = p2 * 7

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p3[:,0], p3[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Triangle Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
________________________________________
