class Student:
    def _init_(self, name):
        self.name = name

    def show(self):
        print("Name:", self.name)

s = Student("Apeksha")
s.show()
