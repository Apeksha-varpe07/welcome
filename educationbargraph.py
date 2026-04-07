import matplotlib.pyplot as plt
left=[1,2,3,4,5,6]
Percentage =[70.60, 10.85, 9.26, 5.29, 2.23, 1.77]
Education_level = ['Illiterate', 'Literate', 'Primary', 
                 'Non-S.S.C', 'S.S.C', 'Other']
plt.bar(education_level, percentage, width=0.8,color =['red','green'])
plt.xlabel('Education level')
plt.ylabel('Percentage')
plt.title('Education Level Distribution')
plt.show()
