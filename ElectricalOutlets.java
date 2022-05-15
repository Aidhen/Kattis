import java.util.Scanner;

public class ElectricalOutlets {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        
        int nCases = in.nextInt();
        int[] powerStrip = new int[nCases];
        int outlets = 0;
        int power = 0;
        
        for(int i = 0; i < nCases; i++){
            powerStrip[i] = in.nextInt();
            outlets = 0;
            power = 0;
            for(int j = 0; j < powerStrip[i]; j++){
                outlets = outlets + in.nextInt();
            }
            power = outlets -(powerStrip[i] - 1);
            System.out.println(power);
        }


        in.close();
    }
}
