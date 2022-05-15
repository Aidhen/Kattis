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
                //System.out.println("porco dio: " + dict[j].key + " " +dict[j].value);
                if(dict[j].key == k){
                    //System.out.println("ho trovato na chiave ripetuta");
                    dict[j].value++;
                    return;
                }
            }
        }
        dict[index] = new Pair(k);
        index++;
    }

    public void printDict(){
        for(int i = 0; i < index; i++){
            //System.out.println(dict.length);
            System.out.println("(key = " + dict[i].key + ", value = "+dict[i].value +")");
        }
    }

    public static void main(String args[]){
        int len = 7;
        Dictionary d = new Dictionary(len);

        /*for(int i = 0; i < len; i++){
            d.insert(i);
            
        }*/

        d.insert(1);
        d.insert(1);
        d.insert(2);
        d.insert(1);
        d.insert(1);
        d.insert(2);
        d.insert(2);
        d.insert(4);
        d.insert(4);
        d.insert(4);
        d.insert(4);
        d.insert(4);
        d.insert(7);
        d.insert(5);
        
        d.printDict();

        System.out.print(d.searchMaxValue(7));
    }
    

}
