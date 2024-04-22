#include <iostream>
using std::cout;
using std::cin; 


int main(void){
    int n;
    int input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input % 2 == 0){ cout << input <<" is even\n"; }
        else { cout << input <<" is odd\n"; }
    }
    return 0;
}