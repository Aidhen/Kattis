import java.util.Scanner;

public class FYI {
    public static void main(String arg[]){
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
        int prefix = number/10000;
        if(prefix == 555){
            System.out.println(1);
        }else{System.out.println(0);}
    
        in.close();
    }
    
}
