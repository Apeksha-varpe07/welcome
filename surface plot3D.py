import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 50)
y = np.linspace(-10, 10, 50)
X, Y = np.meshgrid(x, y)

Z = X**2 - Y**2

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.plot_surface(X, Y, Z, color='blue')

plt.show()
