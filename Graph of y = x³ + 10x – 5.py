import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-10, 10, 100)
y = x**3 + 10*x - 5

plt.plot(x, y, 'r--')   # red dashed line
plt.title("Graph of y = x^3 + 10x - 5")
plt.xlabel("x")
plt.ylabel("y")

plt.show()
