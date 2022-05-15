import java.util.Scanner;

public class NastyHacks{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int nCases = in.nextInt();
        for(int i = 0; i <nCases; i++){
            int r_value = in.nextInt();
            int e_value = in.nextInt();
            int c_value = in.nextInt();

            if(r_value > e_value - c_value){
                System.out.println("do not advertise");
            }else if(r_value < e_value - c_value){
                System.out.println("advertise");
            }else{System.out.println("does not matter");}
        }
        in.close();
    }
}
