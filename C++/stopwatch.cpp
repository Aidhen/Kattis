#include<iostream>

int main(void){
    int n, time= 0;
    std::cin >> n;
    int n_time[n] = {};


    for(int i = 0; i < n; i ++){
        std::cin >> n_time[i];
        if(i % 2 !=0){
            time = time +(n_time[i] - n_time[i-1]);
        }
    }

    if(n % 2 != 0){
        std::cout << "still running";
    }else{
        std::cout << time;
    }

return 0;
}