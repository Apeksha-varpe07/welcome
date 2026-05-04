import matplotlib.pyplot as plt

activities = ["Study", "Sleep", "Play", "Others"]
hours = [8, 7, 5, 4]

plt.pie(hours, labels=activities, autopct='%1.1f%%')
plt.title("Daily Activities")

plt.show()
