class Student
{
    String name = "Apeksha";
    int marks = 90;

    void display()
    {
        System.out.println("Name = " + name);
        System.out.println("Marks = " + marks);
    }

    public static void main(String[] args)
    {
        Student s = new Student();
        s.display();
    }
}
