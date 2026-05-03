import numpy as np
import matplotlib.pyplot as plt

points = np.array([[1,2], [4,2], [4,4], [2,5], [1,2]])

# 1. Shearing
shear = np.array([[1,3],[-2,1]])
p1 = points @ shear

# 2. Reflection (origin)
p2 = -p1

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p2[:,0], p2[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Polygon Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
