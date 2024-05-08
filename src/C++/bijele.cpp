#include<iostream>

using namespace std; 

int main(void){
    constexpr int types = 6;
    constexpr int pieces[types] = {1, 1, 2, 2, 2, 8};
    int wrong_pieces[types] = {};
    int correct[types] = {};
    for(int i = 0; i < types; i++){
        cin >> wrong_pieces[i];
        if( wrong_pieces[i] != pieces[i]){
            correct[i] = pieces[i] - wrong_pieces[i];
        }
    }

    for(int i = 0; i < types; i++){
        cout << correct[i] << " ";
    }

    return 0;
}