#include<iostream>
#include<stack>
#include<string>
using namespace std; 

int main(void){

    int count_p = 0;
    int count_g = 0; 
    int count_o = 0;
    string journey = "";
    stack<char> olis_backpack;
    bool fail = false;
    bool found= false;
    
    cin >> journey;

    for (int i = 0; i < journey.length(); i++){
        
        if(journey[i] == 'p' || journey[i] == 'g' || journey[i] == 'o'){
            olis_backpack.push(journey[i]);
        }
        else if(journey[i] != '.'){
            found = false;
            while(!olis_backpack.empty() && !found){
                if(olis_backpack.top() == journey[i] + 32){
                    found = true;
                    olis_backpack.pop();
                }
                else{ olis_backpack.pop(); }
            }
            if(olis_backpack.empty() && !found){
                fail = true;
                cout << "Neibb" << endl;
                break;
            }
        }
    }

    while(!olis_backpack.empty()){
        if(olis_backpack.top() == 'p') {  ++count_p; olis_backpack.pop(); }
        else if(olis_backpack.top() == 'g') {  ++count_g; olis_backpack.pop(); }
        else if(olis_backpack.top() == 'o') {  ++count_o; olis_backpack.pop(); }
    }

    if(!fail){
        cout << count_p << endl;
        cout << count_g << endl;
        cout << count_o << endl;
    }
    

    
    

    return 0;
}