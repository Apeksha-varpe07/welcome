import numpy as np 
import matplotlib.pyplot as plt 
n=15
x=np.linspace(0,8,n) 
y=-0.5*x**2+4*x
a=-0.5
b=4
x_vertex=-b/(2*a)
y_vertex=-0.5*x_vertex**2+4*x_vertex
plt.plot(x,y,'o-',label='-0.5*x**2+4*x')
plt.plot(x_vertex,y_vertex,'ro',label='vertex(Maximum Point)')
plt.xlabel('x') 
plt.ylabel('y') 
plt.title('Projectile Motion Trajectory')
plt.grid(True) 
plt.legend() 
plt.show()
