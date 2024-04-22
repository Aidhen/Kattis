import java.util.Scanner;

public class Filip {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String first = in.next();
        String second = in.next();
        int a = 0; int b = 0;
        String tmp = "";
        for(int j = 0; j < 2; j++){
            tmp = "";
            for(int i = 0; i < first.length(); i++){
                if(j == 0){
                    tmp = first.substring(i, i+1) + tmp;
                }else{
                    tmp = second.substring(i, i+1) + tmp;
                }
                
            }
            if(j == 0){
                a = Integer.parseInt(tmp);
            }else{
                b = Integer.parseInt(tmp);
            }
            
        }
        if(a > b){
            System.out.println(a);
        }else{
            System.out.println(b);
        }


        in.close();
    }
}
