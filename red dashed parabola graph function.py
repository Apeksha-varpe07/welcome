import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)
y = x**2 - 2*x + 1

plt.plot(x, y, 'r--')
plt.title("y = x^2 - 2x + 1")

plt.show()
