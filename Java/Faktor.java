import java.util.Scanner;
import java.lang.Math;

public class Faktor {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);

        double a = in.nextDouble();
        double b = in.nextDouble()- 0.99;
        
        int response = (int)Math.ceil(a*b);
        System.out.println(response);

        in.close();
    }
}
