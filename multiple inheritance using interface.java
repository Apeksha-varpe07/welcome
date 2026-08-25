interface Father {
    void house();
}

interface Mother {
    void car();
}

class Child implements Father, Mother {
    public void house() {
        System.out.println("Father has a house");
    }

    public void car() {
        System.out.println("Mother has a car");
    }
}

public class MultipleInheritance {
    public static void main(String[] args) {
        Child c = new Child();

        c.house();
        c.car();
    }
}
