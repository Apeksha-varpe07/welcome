people = [
    {"name": "Alice", "age": 30},
    {"name": "Bob", "age": 25},
    {"name": "Aaron", "age": 25}
]

sorted_people = sorted(
    people,
    key=lambda d: (d["age"], d["name"])
)
