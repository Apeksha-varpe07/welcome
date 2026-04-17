import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

x = np.linspace(-20, 20, 50)
y = np.linspace(-20, 20, 50)
X, Y = np.meshgrid(x, y)

Z = X**2 - Y**2

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.plot_wireframe(X, Y, Z, color='brown')

plt.show()
