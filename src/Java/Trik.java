import java.util.Scanner;

public class Trik {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);

        String line = in.next();
        int ball = 1;
        for (int i = 0; i < line.length(); i++){
            System.out.println("ball position = " + ball);
            if(line.substring(i,i+1).equals("A")){
                if(ball == 1){ball = 2;}
                else if(ball == 2){ball = 1;}
            }else if(line.substring(i,i+1).equals("B")){
                if(ball == 2){ball = 3;}
                else if(ball == 3){ball = 2;}
            }else{
                if(ball == 3){ball = 1;}
                else if(ball == 1){ball = 3;}
            }

        }
        System.out.println(ball);
        in.close();
    }
}
