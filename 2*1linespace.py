import numpy as np
import matplotlib.pyplot as plt
x = np.linspace(0.01, 4*np.pi, 1000)  # start slightly above 0
y1 = (x**2) * np.sin(1/x)
y2 = (x**2) * np.sin(1/(x**2))
plt.subplot(2,1,1)
plt.plot(x, y1, label="$x**2 \sin(1/x)$")
plt.legend()
plt.subplot(2,1,2)
plt.plot(x, y2, label="$x**2 \sin(1/x^2)$")
plt.legend()
plt.show()
OUTPUT 
