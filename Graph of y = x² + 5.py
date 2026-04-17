import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-5, 5, 100)
y = x**2 + 5

plt.plot(x, y, 'g--')  # green dashed line
plt.title("y = x^2 + 5")
plt.xlabel("x")
plt.ylabel("y")

plt.show()
