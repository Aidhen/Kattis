#include<iostream>
#include<math.h>

int main(void){

    float input;
    std::cin >> input;

    std::cout.precision(6);
    std::cout <<pow(input, (1/input));

    return 0;
}