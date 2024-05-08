import java.util.Scanner;

public class ColdPuterScience {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int nTemperatures = in.nextInt();
        int count = 0;
        for(int i = 0; i < nTemperatures; i++ ){
            if(in.nextInt() < 0){count++;}            
        }
        System.out.print(count);
        in.close();
    }
}

