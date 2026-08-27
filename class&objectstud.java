class Student {
    int rollNo = 101;
    String name = "Apeksha";

    void display() {
        System.out.println("Roll No = " + rollNo);
        System.out.println("Name = " + name);
    }

    public static void main(String[] args) {
        Student s = new Student();
        s.display();
    }
}
