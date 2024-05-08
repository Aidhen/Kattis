#include <iostream>
using std::cout;
using std::cin; 

int main(void){
    int max = 0;
    int contestant = 0;
    for(int i = 0; i < 5; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            int tmp = 0;
            cin >> tmp;
            sum = sum + tmp;
        }
        if(sum > max){ max = sum; contestant = i+1;}
          
    }
    cout << contestant << " " << max;
    return 0;
}