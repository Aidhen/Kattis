#include<iostream>
using namespace std;

/*look for the element in the array to define index, return the true if it finds it and delete the element, false otherwise*/

bool findAndDelete(int end, char to_find, char (&values)[]){
    for(int i = 0; i < end; i++){
        if(to_find == values[i]){
            values[i] = '0';
            return true;
        }
    }
    return false;
}

int main(void){
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int rows, columns, classes;
    cin >> rows >> columns >> classes;

    int unique_colors = classes;
    
    char layout[rows][columns] = {};

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> layout[i][j];
        }
    }

    for(int j = 0; j < columns; j++){
        for(int i = 0; i < rows - 1; i ++){
            if(layout[i][j] != layout[i+1][j]){
                if(findAndDelete(classes, layout[i][j], alphabet)){
                    unique_colors = unique_colors - 1;
                    if(i + 1 == rows - 1){
                        findAndDelete(classes, layout[i+1][j], alphabet);
                    }
                }
            }
        }
    }
    if(unique_colors > columns){
        unique_colors = columns;
    }
    cout << unique_colors << "\n";
    
    return 0;
}