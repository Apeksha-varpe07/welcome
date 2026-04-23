import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)
y = x**2 + 3*x + 2

plt.plot(x, y, 'g--')
plt.title("y = x^2 + 3x + 2")

plt.show()
