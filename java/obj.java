class one{
    int sem = 4;
}
class two extends one{
    int sem =5;
}
public class obj {
    public static void main(String[] args) {
        two t = new two();
        System.out.println(t.sem);
        System.out.println(((one)t).sem);
        System.out.println(Super.sem);
    }
}
