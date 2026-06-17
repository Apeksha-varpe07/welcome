import pandas as pd

data = {
    "Marks": [80, 90, 70, 95]
}

df = pd.DataFrame(data)

print("Maximum:", df["Marks"].max())
print("Minimum:", df["Marks"].min())
