import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)
y = x**3 - 4*x + 1

plt.plot(x, y, 'r--')
plt.title("y = x^3 - 4x + 1")

plt.show()
