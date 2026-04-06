from pylab import*
import numpy as np
from math import *
x = np.linspace(-2*pi,2*pi,100)
y1=np.sin(x)
y2=np.cos(x)
subplot(2,1,1)
plot (x,y1,label="$\sin x$")
legend()
subplot(2,1,2)
plot(x,y2,label="$\cos x$")
legend()
show()
