import numpy as np
import matplotlib.pyplot as plt

points = np.array([[0,0], [8,-9], [7,4], [0,0]])

# 1. Scaling
p1 = points * [5,-6]

# 2. Reflection (x-axis)
p2 = p1 * [1,-1]

# 3. Rotation (60°)
theta = np.radians(60)
R = np.array([[np.cos(theta), -np.sin(theta)],
              [np.sin(theta), np.cos(theta)]])
p3 = p2 @ R

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p3[:,0], p3[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Triangle Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
