#include<iostream>

int main(void){
    int blocks;
    int height = 0;
    int side = 1;

    std::cin >> blocks;

    while(blocks > 0){
        blocks = blocks - (side * side);
        side = side + 2;
        if(blocks < 0){
            break;
        }
        height++;
    }    
    std::cout << height;

    return 0;
}