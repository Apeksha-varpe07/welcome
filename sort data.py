import pandas as pd

data = {
    "Name": ["A", "B", "C"],
    "Marks": [80, 95, 70]
}

df = pd.DataFrame(data)

print(df.sort_values(by="Marks"))
