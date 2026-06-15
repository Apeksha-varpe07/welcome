import matplotlib.pyplot as plt

# Sample data
months = ["Jan", "Feb", "Mar", "Apr", "May"]
sales = [100, 150, 200, 180, 250]

# Create line chart
plt.plot(months, sales, marker='o')

# Add title and labels
plt.title("Monthly Sales Report")
plt.xlabel("Months")
plt.ylabel("Sales")

# Show grid
plt.grid(True)

# Display chart
plt.show()
