import numpy as np
import matplotlib.pyplot as plt

r = 5
theta = np.linspace(0, 2*np.pi, 100)

x = r * np.cos(theta)
y = r * np.sin(theta)

plt.plot(x, y)
plt.gca().set_aspect('equal')

plt.title("Circle x^2 + y^2 = 25")
plt.show()
