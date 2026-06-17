import pandas as pd

data = {
    "Department": ["CS", "IT", "CS", "IT"],
    "Marks": [80, 90, 70, 85]
}

df = pd.DataFrame(data)

print(df.groupby("Department")["Marks"].mean())
