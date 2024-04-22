#include<iostream>
#include<vector>

using namespace std;

int main(){
    int tests;
    cin >> tests;
    vector<int> borned;
    int not_born[tests] = {};
    int input;
    
    for(int i = 0; i < tests; i++){
        input = 1;
        int tmp = 0;
        borned.clear();
        while(input != 0){
            cin >> input;
            if(input == 0){
                break;
            }
            borned.push_back(input);
        }
        
        for(int j = 1; j < borned.size(); j++){
            tmp = borned[j] - borned[j-1]*2;
            if(tmp > 0){
                not_born[i] = not_born[i] + tmp;
            } 
             
        }  
    }

    for(int i = 0; i <tests; i++){
        cout << not_born[i] << "\n";
    }


    return 0;
}