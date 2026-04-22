import matplotlib.pyplot as plt

students = ["A", "B", "C", "D", "E"]
marks = [60, 75, 50, 80, 65]

plt.barh(students, marks, color='purple')
plt.title("Student Marks")
plt.xlabel("Marks")
plt.ylabel("Students")

plt.show()
