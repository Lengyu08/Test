import java.util.*;

class Student {
    private int age;
    private String name;
    Student(int age, String name) {
        this.age = age; this.name = name;
    }
    public String toString() {
        return "age: " + age + "name: " + name;
    }
}

public class Main {
    public static void main(String[] args) {
        HashSet<Student> hs = new HashSet<Student>();
        hs.add(new Student(18, "张三"));
        hs.add(new Student(13, "李四"));
        hs.add(new Student(14, "王五"));
        Iterator it = hs.iterator();
        while (it.hasNext()) {
            Student student = (Student)it.next();
            System.out.println(student);
        }
    }
}