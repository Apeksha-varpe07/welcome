import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)
y = x**2 - 4*x + 3

plt.plot(x, y, 'r--')
plt.title("y = x^2 - 4x + 3")
plt.xlabel("x")
plt.ylabel("y")

plt.show()
