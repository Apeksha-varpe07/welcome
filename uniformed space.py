import numpy as np
import matplotlib.pyplot as plt
r=5
n=12
theta=np.linspace(0,2*np.pi,n,endpoint=False)
x=r*np.cos(theta)
y=r*np.sin(theta)
plt.figure(figsize=(6,6))
plt.plot(x,y,'o',label='points on circle')
plt.plot(r*np.cos(np.linspace(0,2*np.pi,100)),r*np.sin(np.linspace(0,2*np.pi,100)),'r--',label='circle')
plt.axis('equal')
plt.title('uniformly spaced points on circle')
plt.legend()
plt.grid(True)
plt.show()
