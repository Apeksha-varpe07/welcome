import pandas as pd

data = {
    "Name": ["A", "B", None],
    "Marks": [80, None, 70]
}

df = pd.DataFrame(data)

print(df.isnull().sum())
