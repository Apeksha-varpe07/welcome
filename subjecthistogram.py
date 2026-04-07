import matplotlib.pyplot as plt
passing = [68, 90, 70, 95, 91]
subjects = ['Maths', 'Science', 'English', 'Marathi', 'Hindi']
plt.bar(subjects, passing, color='blue', width=0.8)
plt.xlabel('Subjects')
plt.ylabel('Passing Percentage')
plt.title('Histogram of Passing Percentage')
plt.show()
