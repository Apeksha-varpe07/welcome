import numpy as np
import matplotlib.pyplot as plt

# Given parameters
n = 12
y_min = -4
y_max = 4

# Generate uniformly spaced y-values
y = np.linspace(y_min, y_max, n)

# Compute corresponding x-values for the parabola x = y^2
x = y**2

# Plotting the parabola
plt.plot(x, y, 'o-', label='x = y^2 (points along y)')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Uniformly spaced points along y on parabola x = y^2')
plt.grid(True)
plt.legend()
plt.show()
