import matplotlib.pyplot as plt

expenses = ["Food", "Rent", "Travel", "Shopping", "Others"]
amount = [30, 25, 15, 10, 20]

plt.pie(amount, labels=expenses, autopct='%1.1f%%')
plt.title("Monthly Expenses")

plt.show()
