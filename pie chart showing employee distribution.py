import matplotlib.pyplot as plt

departments = ["IT", "HR", "Finance", "Marketing", "Sales"]
employees = [30, 15, 20, 25, 10]

plt.pie(employees, labels=departments, autopct='%1.1f%%')
plt.title("Department Distribution")

plt.show()
