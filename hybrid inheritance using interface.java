interface Animal {
    void eat();
}

interface Pet {
    void play();
}

class Dog implements Animal, Pet {
    public void eat() {
        System.out.println("Dog is eating");
    }

    public void play() {
        System.out.println("Dog is playing");
    }
}

class Puppy extends Dog {
    void sleep() {
        System.out.println("Puppy is sleeping");
    }
}

public class HybridInheritance {
    public static void main(String[] args) {
        Puppy p = new Puppy();

        p.eat();
        p.play();
        p.sleep();
    }
}
