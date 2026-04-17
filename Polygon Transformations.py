import matplotlib.pyplot as plt
import numpy as np

# Original points
points = np.array([[1,1], [-5,1], [-5,-4], [1,-4], [1,1]])

# Rotation 90°
rot_matrix = np.array([[0, -1], [1, 0]])
rotated = points @ rot_matrix

# Shearing in x-direction
shear_matrix = np.array([[1, 3], [0, 1]])
sheared = points @ shear_matrix

plt.plot(points[:,0], points[:,1], label="Original")
plt.plot(rotated[:,0], rotated[:,1], label="Rotated 90°")
plt.plot(sheared[:,0], sheared[:,1], label="Sheared")

plt.legend()
plt.title("Polygon Transformations")
plt.show()
