import matplotlib.pyplot as plt
x,y=3,4
plt.scatter(x,y,color='red',s=80,label='Point(3,4)')
plt.text(x+0.1,y+0.1,"(3,4)")
plt.legend()
plt.title("Point Plot")
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.grid(True)
plt.axis("equal")
plt.show()
