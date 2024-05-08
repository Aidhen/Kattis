import java.util.Scanner;
public class StuckInATimeLoop{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int series = in.nextInt();
        for(int i = 1; i <= series; i++){
            System.out.println(i + " Abracadabra");
        }
        in.close();
    }
}
