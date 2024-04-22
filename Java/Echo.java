import java.util.Scanner;

public class Echo {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String word = in.next();

        for(int i = 0; i < 3; i++){
            System.out.print(word);
            if (i < 2){
                System.out.print(" ");
            }
        }

        in.close();
    }    
}
