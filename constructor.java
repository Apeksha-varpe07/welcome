class Student {
    String name;
    int age;

    // Constructor
    Student() {
        name = "Apeksha";
        age = 20;
    }

    // Method to display details
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        // Creating object
        Student s1 = new Student();

        // Calling display method
        s1.display();
    }
}
