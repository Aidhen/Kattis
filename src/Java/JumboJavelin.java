import java.util.Scanner;

public class JumboJavelin{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int nCases = in.nextInt();
        int len = 0;

        for(int i = 0; i <nCases; i++){
            len = len + in.nextInt();
        }
        System.out.println(len - (nCases-1));

        in.close();
    }
}
