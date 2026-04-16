import matplotlib.pyplot as plt

subjects = ["Math", "English", "Biology", "Physics", "Chemistry"]
marks = [68, 45, 79, 56, 70]

plt.bar(subjects, marks, color='brown')
plt.title("Marks in Subjects")
plt.xlabel("Subjects")
plt.ylabel("Marks")

plt.show()
