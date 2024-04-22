#include <iostream>

int main(void){
    int start,time,n_bus;
    std::cin >> start >> time >> n_bus;

    int walk_time [n_bus + 1] = {};
    int transit_time [n_bus] = {};
    int bus_interval[n_bus] = {};
    
    for(int i = 0; i <= n_bus; i++){
        std::cin >> walk_time[i];
    }
    for(int i = 0; i < n_bus; i++){
        std:: cin >> transit_time[i];
    }
    for(int i = 0; i < n_bus; i++){
        std:: cin >> bus_interval[i];
    }

    for(int i = 0; i < n_bus; i++){
        start = start + walk_time[i];
        if(start > time){
            std::cout << "no";
            return 0;
        } 
        else if((start % bus_interval[i]) == 0){
            start = start + transit_time[i];
        }
        else if(start < bus_interval[i]){
            start = bus_interval[i];
            start = start + transit_time[i];
        }
        else if(start > bus_interval[i]){
            int tmp = start / bus_interval[i];
            start = start + (bus_interval[i] - (start % tmp));
        }
    }
    
    start = start + walk_time[n_bus];


    if(start > time){
        std::cout << "no";
    }
    else{
        std::cout << "yes";
    }

    return 0;
}