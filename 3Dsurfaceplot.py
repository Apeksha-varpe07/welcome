from mpl_toolkits import mplot3d
import numpy as np 
import matplotlib.pyplot as plt
from pylab import*
def f(X,Y):
    return X*np.exp(Y)
x=np.linspace(0,2,30)
y=np.linspace(0,2,30)
X,Y=np.meshgrid(x,y)
Z=f(X,Y)
ax=axes(projection='3d')
ax.plot_surface(X,Y,Z)
xlabel('x')
ylabel('y')
title('$Z=X*np.exp(Y)$')
legend()
show()
