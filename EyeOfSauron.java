import java.util.Scanner;

public class EyeOfSauron {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String sauron = in.next();
        int[] count = {0,0};
        int j = 0;
        for(int i = 0; i < sauron.length(); i++){
            if(sauron.substring(i,i+1).equals("|")){
                count[j] = count[j] + 1;
            }else{i++; j++;}
        }
        if(count[0] == count[1]){
            System.out.println("correct");
        }else{System.out.println("fix");}


        in.close();
    }
}
