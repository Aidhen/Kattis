#include<iostream>
#include<string>
using namespace std; 

int main(void){
    string name;
    cin >> name;
    
    for(int i = 0; i < name.length() - 1; i++){
        if(name[i] == name[i+1]){
            name.erase(name.begin() + (i+1));
            i--;    
        }
    }
    cout << name;
    return 0;
}