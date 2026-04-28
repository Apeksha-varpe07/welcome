import matplotlib.pyplot as plt

courses = ["BCA", "BBA", "BSc", "BA", "Other"]
students = [40, 25, 20, 10, 5]

plt.pie(students, labels=courses, autopct='%1.1f%%')
plt.title("Course Distribution")

plt.show()
