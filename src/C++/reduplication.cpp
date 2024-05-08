#include <iostream>
#include <string>
using namespace std; 

int main(void){

    int repeat;
    string word;

    cin >> word; cin >> repeat;

    for (int i = 0; i < repeat; i++)
    {
        cout << word;
    }
    

    return 0;
}