import numpy as np
import matplotlib.pyplot as plt

points = np.array([[-2,5], [-2,9], [3,5], [4,2], [-2,5]])

# 1. Translation
p1 = points + [2,-5]

# 2. Rotation (60°)
theta = np.radians(60)
R = np.array([[np.cos(theta), -np.sin(theta)],
              [np.sin(theta), np.cos(theta)]])
p2 = p1 @ R

# 3. Shearing
shear = np.array([[1,5],[0,1]])
p3 = p2 @ shear

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p3[:,0], p3[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Polygon Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
________________________________________
