#include<iostream>
using namespace std; 


int main(void){

    int a; int b;
    cin >> a; cin >> b;
    bool happy = false;

    for (int i = a; i <= b; i++){
        if (a > 2){
            break;
        }
        if(i == 2 ){
            happy = true;
            break;
        }

    }
    
    if (happy == false){
        cout << ":(";
    }
    else{
        cout << 1 << endl;
        cout << 2 << endl;
    }
    
    return 0;
}