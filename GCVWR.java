import java.util.Scanner;

public class GCVWR {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int g = in.nextInt();
        int t = in.nextInt();
        int n = in.nextInt();
        int items_weight = 0; 
        
        for(int i = 0; i < n; i++){
            items_weight = items_weight + in.nextInt();
        }
        double result = (g-t)*0.9-items_weight;
        System.out.println((int)result);
        in.close();
    }
}
