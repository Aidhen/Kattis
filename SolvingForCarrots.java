import java.util.Scanner;

public class SolvingForCarrots{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        int carrots = 0;
        int quality = 0;
        String tmp = "";
        for(int i = 0; i < line.length(); i++){
            if(line.substring(i,i+1).equals(" ")){
                quality = Integer.parseInt(tmp);
                tmp = "";
            }else{
                tmp = tmp + line.substring(i,i+1);
            }
        }
        carrots = Integer.parseInt(tmp);

        for(int j = 0; j < quality; j++){
            in.nextLine();
        }
        System.out.println(carrots);
        in.close();
    }
}
