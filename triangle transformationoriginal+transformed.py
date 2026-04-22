import numpy as np
import matplotlib.pyplot as plt

points = np.array([[1,6], [0,8], [5,3], [1,6]])

# 1. Shearing
shear = np.array([[1,5],[0,1]])
p1 = points @ shear

# 2. Reflection (y-axis)
p2 = p1 * [-1,1]

# 3. Translation
p3 = p2 + [1,4]

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p3[:,0], p3[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Triangle Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
