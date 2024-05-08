#include <iostream>
using std::cout;
using std::cin; 

int main(void){
    int x,y,n;
    cin >> x >>y >>n;

    for (int i = 1; i <= n; i++)
    {
        if(i % x == 0 && i % y == 0) { cout << "FizzBuzz"<< std::endl; }
        else if (i % x == 0) { cout << "Fizz"<< std::endl; }
        else if(i % y == 0) { cout << "Buzz"<< std::endl; } 
        else { cout << i << std::endl; }
    }
    return 0;
}