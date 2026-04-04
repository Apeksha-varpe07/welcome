import numpy as np
import matplotlib.pyplot as plt
r=5
n=10
theta1=0
theta2=np.pi/2
theta=np.linspace(theta1,theta2,n)
x=r*np.cos(theta)
y=r*np.sin(theta)
plt.plot(x,y,'o-',label='Arc Points')
plt.gca().set_aspect('equal')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Uniformly spaced point on circular arc')
plt.legend()
plt.grid(True)
plt.show()
