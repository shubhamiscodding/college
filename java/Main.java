import java.util.Scanner;

class Student{
    String name;
    int age;
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void display() {
        System.out.println("Nmae: " + name);
        System.out.println("Age: "+ age);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String nnn = sc.nextLine();
        int year = sc.nextInt();
        Student ss = new Student(nnn, year);
        ss.display();

    }
}