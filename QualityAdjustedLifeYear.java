import java.util.Scanner;
public class QualityAdjustedLifeYear{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int data = in.nextInt();
        double qaly = 0;
        String line = "";
        int y = 4;
        int q = 3;

        for(int i = 0; i <= data; i++){
            line = in.nextLine();
            if(line.length() > q){
                qaly = qaly + Double.parseDouble(line.substring(0,q)) * Double.parseDouble(line.substring(y));
            }

        }
        in.close();
        System.out.print(qaly);
    }
}
