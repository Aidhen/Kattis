#include <iostream>
using std::cout;
using std::cin; 


int main(void){
    int n;
    cin >> n;

    int num = 0;
    int den = n;
    int tmp;
    for(int i =0; i < n; i++)
    {
        cin >> tmp;
        if(tmp < 0) { den = den + tmp; }
        else { num = num + tmp; } 
    }
    cout <<  (float) num/den;
    return 0;
}