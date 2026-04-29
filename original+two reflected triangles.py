import numpy as np
import matplotlib.pyplot as plt

points = np.array([[1,3], [3,3], [4,5], [1,3]])

# Reflection y = x
p1 = points[:, ::-1]

# Reflection y = -x
p2 = -points[:, ::-1]

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p1[:,0], p1[:,1], label="y=x", marker='o')
plt.plot(p2[:,0], p2[:,1], label="y=-x", marker='o')

plt.legend()
plt.title("Triangle Reflection")
plt.axhline(0)
plt.axvline(0)

plt.show()
