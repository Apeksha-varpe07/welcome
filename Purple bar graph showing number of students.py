import matplotlib.pyplot as plt

classes = ["FY", "SY", "TY", "Final"]
students = [60, 50, 45, 40]

plt.bar(classes, students, color='purple')
plt.title("Students in Classes")
plt.xlabel("Classes")
plt.ylabel("Number of Students")

plt.show()
