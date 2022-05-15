import java.util.Scanner;

public class Tarifa{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int tarifa = in.nextInt();
        int month = in.nextInt();
        int reusable = 0;
        for(int j = 0; j < month ; j++){
            int used = in.nextInt();
            reusable = reusable + tarifa - used;
        }
        System.out.println(reusable + tarifa);
        in.close();
    }
}
