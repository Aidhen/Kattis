import java.util.Scanner;


public class DigitSwap {
    public static void main(String args[]){

        Scanner in = new Scanner(System.in);
        String number = in.next();
        int swapNumber = Integer.parseInt(number.substring(1,2) + number.substring(0,1));
        System.out.println(swapNumber);
        

        in.close();
    }    
}
