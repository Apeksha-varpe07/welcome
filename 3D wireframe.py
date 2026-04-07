from mpl_toolkits import mplot3d
import numpy as np 
import matplotlib.pyplot as plt
from pylab import*
def f(X,Y):
    return np.exp(X**2+Y**2)
x=np.linspace(0,2*np.pi,30)
y=np.linspace(0,2*np.pi,30)
X,Y=np.meshgrid(x,y)
Z=f(X,Y)
ax=axes(projection='3d')
ax.plot_wireframe(X,Y,Z,rstride=2,cstride=2)
xlabel('x')
ylabel('y')
title('$Z=np.exp(X**2+Y**2)$')
legend()
show()
