#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std; 

int main(void){
    int tests = 0;
    cin >> tests;
    vector<string> decoded;

    while(tests > 0){
        string encoded = "";
        cin >> encoded;

        int side = sqrt(encoded.length());
        char square[side][side] = {};
        
        
        for(int i = 0; i < side; i++){
            for( int j = 0; j < side; j++){
                square[i][j] = encoded[j + side * i];
            }
        }
        string tmp = "";
        for(int j = side -1; j > -1 ; j--){
            for( int i = 0; i < side; i++){
                tmp = tmp + square[i][j];
            }
        }
        decoded.push_back(tmp);
        tests--;
    }

    for(int i = 0; i < decoded.size(); i++){
        cout << decoded[i] << "\n";
    }
    
    



    return 0;
}