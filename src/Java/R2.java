import java.util.Scanner;
public class R2{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        int r1 = 0;
        int s = 0;
        String tmp = "";
        for(int i = 0; i < line.length(); i++){
            if(line.substring(i,i+1).equals(" ")){
                r1 = Integer.parseInt(tmp);
                tmp = "";
            }else{
                tmp = tmp + line.substring(i,i+1);
            }
        }
        s = Integer.parseInt(tmp);
        System.out.print(2*s - r1);
        in.close();
    }
}
