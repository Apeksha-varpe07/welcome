import matplotlib.pyplot as plt

subjects = ["Math", "Science", "English", "History", "Geography"]
marks = [70, 65, 80, 60, 75]

plt.barh(subjects, marks, color='blue')
plt.title("Subject Marks")
plt.xlabel("Marks")
plt.ylabel("Subjects")

plt.show()
