import numpy as np
import matplotlib.pyplot as plt

# Number of points
n = 10

# --- Uniform spacing along x ---
x_uniform = np.linspace(-5, 5, n)
y_from_x = x_uniform**2

# --- Uniform spacing along y ---
# y = x^2 ranges from 0 to 25 for x in [-5,5]
y_uniform = np.linspace(0, 25, n)
x_from_y = np.sqrt(y_uniform)      # Only positive branch

# Plotting both
plt.plot(x_uniform, y_from_x, 'o-', label='Uniform in x')
plt.plot(x_from_y, y_uniform, 's-', label='Uniform in y (positive x branch)')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Comparison of uniform spacing along x vs y for y = x^2')
plt.grid(True)
plt.legend()
plt.show()
