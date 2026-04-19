import matplotlib.pyplot as plt

languages = ["Python", "Java", "C", "C++", "Other"]
students = [40, 30, 20, 25, 15]

plt.pie(students, labels=languages, autopct='%1.1f%%')
plt.title("Programming Language Popularity")

plt.show()
