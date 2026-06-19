people = [
    {"name": "Alice", "age": 30},
    {"name": "Bob", "age": 25},
    {"name": "Charlie", "age": 35}
]

# Sort by age (ascending)
sorted_people = sorted(people, key=lambda d: d["age"])

print(sorted_people)
