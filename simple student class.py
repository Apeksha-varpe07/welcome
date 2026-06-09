class Student:
    def __init__(self, roll, name):
        self.roll = roll
        self.name = name

    def display(self):
        print("Roll No:", self.roll)
        print("Name:", self.name)

s = Student(101, "Apeksha")
s.display()
