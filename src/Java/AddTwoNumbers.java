import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String args[]){
       Scanner in = new Scanner(System.in);
       int result =in.nextInt() + in.nextInt();
       System.out.println(result);
       in.close();
    }
}
