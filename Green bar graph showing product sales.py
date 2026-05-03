import matplotlib.pyplot as plt

products = ["Laptop", "Mobile", "Tablet", "Camera", "Printer"]
sales = [25, 40, 15, 10, 20]

plt.bar(products, sales, color='green')
plt.title("Product Sales")
plt.xlabel("Products")
plt.ylabel("Sales")

plt.show()
