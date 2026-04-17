import matplotlib.pyplot as plt

sports = ["Cricket", "Football", "Badminton", "Hockey", "Other"]
students = [34, 50, 24, 10, 82]

plt.pie(students, labels=sports, autopct='%1.1f%%')
plt.title("Sports Participation")

plt.show()
