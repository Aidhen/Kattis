import java.util.Scanner;
import java.lang.Math;

public class Pot{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int i = in.nextInt();
        int result = 0;
        for(int j = 0; j < i; j++){
            int tmp = in.nextInt();
            result = result + (int)Math.pow(tmp/10, tmp%10);
        }
        System.out.println(result);
        in.close();
    }  
}

