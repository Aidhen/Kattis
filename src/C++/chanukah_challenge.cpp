#include <iostream>

int main(void){
    int k_set,days,k;
    std::cin >> k_set;
    
    int output [k_set] = {};
   
    for(int i = 0; i < k_set; i++){
        std::cin >> k >> days;
        for(int j = 1; j <= days; j++){
            output[i] = output[i] + j;
        }
        output[i] = output[i] + days;
    }

    for(int i = 0; i < k_set; i++){
        std::cout << i+1 << " " << output[i] << "\n";
    }
    return 0;
}