import pandas as pd

data = {
    "Name": ["A", "B", "C", "D"],
    "Marks": [80, 90, 70, 95]
}

df = pd.DataFrame(data)

result = df[df["Marks"] > 80]
print(result)
