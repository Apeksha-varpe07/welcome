import matplotlib.pyplot as plt

subjects = ["Math", "English", "Science", "History", "Geography"]
marks = [55, 65, 70, 60, 75]

plt.bar(subjects, marks, color='green')
plt.title("Student Marks")
plt.xlabel("Subjects")
plt.ylabel("Marks")

plt.show()
