from pylab import*
import numpy as np
from math import *
x = np.linspace(-5,5,100)
y1=x
y2=(x**2)
y3=(x**3)
y4=(x**4)
subplot(2,2,1)
plot (x,y1,label="${x}$")
legend()
subplot(2,2,2)
plot(x,y2,label="${x**2}$")
legend()
subplot(2,2,3)
plot (x,y3,label="${x**3}$")
legend()
subplot(2,2,4)
plot(x,y4,label="${x**4}$")
legend()
show()
