#include<iostream>
#include<algorithm>
//#include<cmath>
using namespace std; 

/*radice quadrata dei quadrati delle misure dei lati piu' piccoli coincide con la misura del lato piu' grande allora il triangolo e' rettangolo*/

int main(void){
    constexpr int kSides = 3;
    bool go_on = true;

    int sides[kSides] = {};
    bool results[1000] = {};
    
    int n_input = 0;

    while(go_on){
        for(int i = 0; i <kSides; i++){
            cin >> sides[i]; 
        }
        sort(sides, sides + kSides);
        
        if(sides[0] == 0 && sides[1] == 0 && sides[2] == 0){
            go_on = false;
            break;
        }
        
        int hypotenuse = sides[0] * sides[0] + sides[1] * sides[1];
        if(hypotenuse == sides[2] * sides[2]){
            results[n_input] = true;
        }else{
            results[n_input] = false;
        }
        
        n_input++;
    }

    for(int i = 0; i < n_input; i++){
        if(results[i] == true){
            cout << "right\n";
        }else{
            cout << "wrong\n";
        }
    }
    return 0;
}