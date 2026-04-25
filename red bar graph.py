import matplotlib.pyplot as plt

days = ["Mon", "Tue", "Wed", "Thu", "Fri"]
sales = [100, 150, 120, 180, 200]

plt.bar(days, sales, color='red')
plt.title("Weekly Sales")
plt.xlabel("Days")
plt.ylabel("Sales")

plt.show()
