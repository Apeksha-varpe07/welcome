import pandas as pd

data = {
    "Name": ["A", "B", "C"],
    "Marks": [80, 90, 70]
}

df = pd.DataFrame(data)

avg = df["Marks"].mean()
print("Average Marks:", avg)
