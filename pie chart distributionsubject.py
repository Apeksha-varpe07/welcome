
import matplotlib.pyplot as plt

subjects = ["Math", "Science", "English", "History", "Other"]
marks = [20, 25, 15, 10, 30]

plt.pie(marks, labels=subjects, autopct='%1.1f%%')
plt.title("Subject Distribution")

plt.show()
