import matplotlib.pyplot as plt

languages = ["Python", "Java", "C", "C++"]
users = [40, 25, 20, 15]

plt.pie(users, labels=languages, autopct="%1.1f%%")

plt.title("Programming Language Popularity")
plt.show()
