import java.util.Scanner;

public class GrassSeedInc{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        double cost = in.nextDouble();
        int lines = in.nextInt();
        double totalCost = 0;
        double x = 0;
        double y = 0;
        for (int i = 0; i < lines; i++){
            x = in.nextDouble();
            y = in.nextDouble();
            totalCost = totalCost + (x*y*cost);
        }
        System.out.println(totalCost); 
        in.close();
    }
}
