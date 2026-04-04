import numpy as np
import matplotlib.pyplot as plt

n = 10
x_min = -5
x_max = 5

# Generate uniformly spaced x values
x = np.linspace(x_min, x_max, n)

# Parabola equation
y = x**2

# Plotting
plt.plot(x, y, 'o-', label='Uniformly spaced points')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Uniformly spaced points on parabola y = x^2')
plt.grid(True)
plt.legend()
plt.show()
