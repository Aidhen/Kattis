import java.util.Scanner;

public class JackOLantern{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        int m = in.nextInt();
        System.out.println(n*m*t);
        in.close();
    }
}
