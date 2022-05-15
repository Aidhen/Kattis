import java.util.Scanner;
import java.util.Arrays;

public class BasicProgramming2 {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int t = in.nextInt();
        int[] A = new int[N];
        for(int i = 0; i <N; i++){
            A[i] = in.nextInt();
        }
        switch(t){
            case 1:
                boolean bool = true;
                for(int i = 0; i < N; i++){
                    for(int j = i + 1; j < N; j++){
                        if(A[i]+A[j] == 7777){
                            System.out.println("Yes");
                            bool = false;
                            break;
                        }
                        if(!bool){break;}
                    }
                }
                if(bool) {System.out.println("No");}
                break;

            case 2:
                bool = true; 
                for(int i = 0; i < N; i++){
                    for(int j = i + 1; j < N; j++){
                        if(A[i]==A[j]){
                            System.out.println("Contains duplicate");
                            bool = false;
                            break;
                        }
                        if(!bool){break;}
                    }
                }
                if(bool) {System.out.println("Unique");}
                break;

            case 3: //da rivedere
                Dictionary d = new Dictionary(N);
                for(int i = 0; i < N; i++){
                    d.insert(A[i]);
                }
                System.out.println(d.searchMaxValue(N));
                break;

            case 4:
                Arrays.sort(A);
                if(N % 2 == 0){
                    System.out.println(A[N/2 -1] +" "+A[N/2]);
                }else{
                    System.out.println(A[N/2]);
                }
                break;

            case 5:
                Arrays.sort(A);
                for(int i = 0; i <N; i++){
                    if(A[i] > 99 && A[i] < 1000){
                        System.out.print(A[i] + " ");

                    }
                }
                break; 
                

        }


        in.close();
    }    
}
class Dictionary{
    
    Pair[] dict;
    int index=0;

    class Pair{

        public int key;
        public int value;
        
        public Pair(){
            key = -1;
            value = -1;
        }
        public Pair(int k){
            key = k;
            value = 1;
        }
    }
    public Dictionary(int n){
        dict = new Pair[n];
        index = 0;
    }
    public int searchMaxValue(int n){
        int max = n/2;
        int response = -1;
        for(int i = 0; i < index; i++){
            if(max < dict[i].value){
                max = dict[i].value;
                response = dict[i].key;
            }
        }
        return response;
    }
    public void insert(int k){
        if(index > 0){
            for(int j = 0; j < index; j++){
                if(dict[j].key == k){
                    dict[j].value++;
                    return;
                }
            }
        }
        dict[index] = new Pair(k);
        index++;
    }
}

