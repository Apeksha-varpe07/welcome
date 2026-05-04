import numpy as np
import matplotlib.pyplot as plt

points = np.array([[1,2], [4,2], [4,5], [1,2]])

# Scaling 0.5
p1 = points * 0.5

# Scaling 4
p2 = points * 4

# Plot
plt.plot(points[:,0], points[:,1], label="Original", marker='o')
plt.plot(p1[:,0], p1[:,1], label="0.5x", marker='o')
plt.plot(p2[:,0], p2[:,1], label="4x", marker='o')

plt.legend()
plt.title("Triangle Scaling")
plt.axhline(0)
plt.axvline(0)

plt.show()
