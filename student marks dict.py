marks = {
    "Amit": 85,
    "Neha": 90,
    "Riya": 78
}

name = input("Enter student name: ")

if name in marks:
    print("Marks:", marks[name])
else:
    print("Student not found")
