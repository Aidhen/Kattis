import java.util.Scanner;

public class CountTheVolwes {
    public static void main(String args []){
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        int count = 0;
        for(int i = 0; i < line.length(); i++){
            if(line.substring(i, i+1).equalsIgnoreCase("a")||line.substring(i, i+1).equalsIgnoreCase("e")||line.substring(i, i+1).equalsIgnoreCase("i")||line.substring(i, i+1).equalsIgnoreCase("o")||line.substring(i, i+1).equalsIgnoreCase("u")){
                count++;
            }
        }
        System.out.println(count);
        in.close();
    }    
}
