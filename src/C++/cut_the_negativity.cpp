#include<iostream>
#include<vector>

using std::cout; 
using std::cin; 
using std::vector;

int main(void){
    int n, m = 0;
    cin >> n;

    int matrix [n][n] = {};
    vector <vector<int>> result {};    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j] != -1) 
            {
                vector<int> tmp;
                tmp.push_back(i+1); tmp.push_back(j+1); tmp.push_back(matrix[i][j]);
                result.push_back(tmp);
            }
        }
    }
    cout << result.size() << "\n";
    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
     
    return 0;
}