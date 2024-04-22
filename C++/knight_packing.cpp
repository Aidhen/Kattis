#include<iostream>
using std::cout;
using std::cin; 

int main(void)
{
    int n;
    cin >> n;

    if(n % 2 == 1)
    {
        cout << "first";
    }else
    {
        cout << "second";
    }
    return 0;
}