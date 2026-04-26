import numpy as np
import matplotlib.pyplot as plt

points = np.array([[4,4], [-4,4], [-4,-4], [4,-4], [4,4]])

# 1. Shearing (y-direction)
p1 = points + [0,-3]

# 2. Reflection (x-axis)
p2 = p1 * [1,-1]

# 3. Translation
p3 = p2 + [5,8]

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p3[:,0], p3[:,1], label="Transformed", marker='o')

plt.legend()
plt.title("Polygon Transformation")
plt.axhline(0)
plt.axvline(0)

plt.show()
