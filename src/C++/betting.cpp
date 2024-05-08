#include <iostream>

int main(void){
    
    constexpr double tot = 100;
    double percentage_one;
    
    std::cin >> percentage_one;

    double result_1 = tot / percentage_one;
    double resutl_2 = tot / (tot - percentage_one);
    std::cout << result_1 <<"\n" << resutl_2;

    
    return 0;
}