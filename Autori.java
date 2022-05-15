import java.util.Scanner;

public class Autori {
    public static void main(String args[]){
       Scanner in = new Scanner(System.in);
       String line = in.nextLine();
       String out = "";

       for(int i = 0; i < line.length(); i++){
           if(i == 0){
               out = out + line.substring(i, i+1);
           }else{
               if(line.substring(i, i+1).equals("-")){
                   out = out + line.substring(i+1, i+2);
               }
           }

       }
       System.out.println(out);

       in.close();
    }
}
