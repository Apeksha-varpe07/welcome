import pandas as pd
import matplotlib.pyplot as plt

data = {
    "Name": ["A", "B", "C", "D"],
    "Marks": [80, 90, 70, 95]
}

df = pd.DataFrame(data)

plt.bar(df["Name"], df["Marks"])
plt.title("Student Marks")
plt.xlabel("Students")
plt.ylabel("Marks")
plt.show()
