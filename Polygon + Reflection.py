import matplotlib.pyplot as plt

# Original points
x = [4, 6, 6, 4, 4]
y = [3, 3, 5, 5, 3]

# Reflection about x-axis
y_reflect_x = [-i for i in y]

# Reflection about y-axis
x_reflect_y = [-i for i in x]

# Plot
plt.plot(x, y, label="Original", color='blue')
plt.plot(x, y_reflect_x, label="Reflection X-axis", color='red')
plt.plot(x_reflect_y, y, label="Reflection Y-axis", color='green')

plt.axhline(0, color='black')
plt.axvline(0, color='black')

plt.legend()
plt.title("Polygon Transformations")
plt.show()
Output:
