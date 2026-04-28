import matplotlib.pyplot as plt

students = ["A", "B", "C", "D", "E"]
marks = [55, 70, 65, 80, 60]

plt.bar(students, marks, color='cyan')
plt.title("Student Marks")
plt.xlabel("Students")
plt.ylabel("Marks")

plt.show()
