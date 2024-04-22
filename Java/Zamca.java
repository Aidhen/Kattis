import java.util.Scanner;

public class Zamca {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int taskL = in.nextInt();
        int taskD = in.nextInt(); 
        int taskX = in.nextInt();

        for(int i = taskL; i <= taskD; i++){
            int tmp = i;
            int sum = 0;
            while (tmp>0){
                sum = sum + tmp % 10;
                tmp = tmp / 10;
            }
            if(sum == taskX){
                System.out.println(i);
                break;
            }
        }
        for(int j = taskD; j >= taskL; j--){
            int tmp = j;
            int sum = 0;
            while (tmp > 0){
                
                sum = sum + tmp % 10;
                tmp = tmp / 10;
            }
            if(sum == taskX){
                System.out.println(j);
                break;
            }
        }
        in.close();      
    }
}
