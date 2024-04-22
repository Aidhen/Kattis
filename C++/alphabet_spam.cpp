#include<iostream>
#include<string>
using namespace std; 

int main(void){
    string line;
    getline(cin, line);
    int space = 0, lower_case = 0, upper_case = 0, symbols = 0;
    for(int i = 0; i < line.length(); i++){
        char tmp = line[i];
        if(tmp == '_'){
            space = space + 1;
        }else if(tmp >= 33 && tmp <= 64){
            symbols = symbols + 1;
        }else if(tmp >= 91 && tmp <= 96){
            symbols = symbols + 1;
        }else if(tmp >= 123){
            symbols = symbols + 1;
        }else if(tmp >= 65 && tmp <=90){
            upper_case = upper_case + 1;
        }else{
            lower_case = lower_case + 1;
        }
    }
    
    cout << (double)space/line.length() << "\n" << (double)lower_case/line.length() << "\n" << (double)upper_case/line.length() << "\n" << (double)symbols/line.length(); 
    
    return 0;
}