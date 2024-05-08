import java.util.Scanner;

public class FindingAnA {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String line = in.next();

        for(int i = 0; i < line.length(); i++){
            if((line.substring(i,i+1)).equals("a")){
                line = line.substring(i);
                break;
            }
        }
        System.out.println(line);
        in.close();
    }
}
