import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr", "May"]
sales = [200, 250, 300, 280, 320]

plt.bar(months, sales, color='orange')
plt.title("Monthly Sales")
plt.xlabel("Months")
plt.ylabel("Sales")

plt.show()
