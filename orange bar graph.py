import matplotlib.pyplot as plt

items = ["Pen", "Pencil", "Eraser", "Scale", "Notebook"]
quantity = [20, 35, 15, 10, 25]

plt.bar(items, quantity, color='orange')
plt.title("Stationery Items")
plt.xlabel("Items")
plt.ylabel("Quantity")

plt.show()
