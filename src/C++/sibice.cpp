#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int matches, base, height = 0;
    cin >> matches >> base >> height;

    int hypotenuse = sqrt(pow(base,2) + pow(height, 2));
    int response[matches] = {};

    for(int i = 0; i < matches; i++){
        int tmp;
        cin >> tmp;
        if(tmp <= hypotenuse){
            response[i] = 1;
        }
    }

    for(int i = 0; i < matches; i++){
        if(response[i] == 1){
            cout << "DA\n";
        }else{ 
            cout << "NE\n";
        }
    }
    
    return 0;
}