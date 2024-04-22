import java.util.Scanner;
public class TriangleArea{
    public static void main(String arg[]){
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        
        double a = 0;
        double b = 0;
        String tmp = "";
        
        for(int i = 0; i < input.length(); i++){
            if(input.substring(i,i+1).equals(" ")){
                a = Integer.parseInt(tmp);
                tmp = "";    
            }else{
                tmp = tmp + input.substring(i,i+1);
            }
        }
        
        b = Integer.parseInt(tmp);
        System.out.print(a*b/2);
        in.close();
        
    }
}