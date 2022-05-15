import java.util.Scanner;

public class IsItHalloween{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        if(line.equals("OCT 31") || line.equals("DEC 25")){
            System.out.println("yup");
        }else{System.out.println("nope");}
        in.close();
    }
}
