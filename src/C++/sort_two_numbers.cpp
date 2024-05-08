#include<iostream>

using namespace std;

int main(){
    int first,second = 0;
    cin >> first >> second;

    if(first > second){
        cout << second << " " << first;
    }else{
        cout << first << " " << second;
    }
    
    return 0;
}