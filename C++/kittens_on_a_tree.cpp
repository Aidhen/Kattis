#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std; 

/*Takes a row of integers and puts them into a vector in order*/
vector<int> ExtraxtInt(string &line){
    vector<int> numbers;
    stringstream ss(line);
    int number;
    while(ss >> number){
        numbers.push_back(number);
    }
    return numbers;
}

void print(string label,vector<int> &v){
    cout << label << "[";
    for(int i = 0; i < v.size(); i ++){
        if(i == v.size()- 1){
            cout << v[i];
        }else{
            cout << v[i] << ", ";
        }
    }
    cout << "]\n";
}

int main(void){
    int kitten_position;
    string line;
    vector<vector<int>> branches;
    cin >> kitten_position;

    while(line != "-1"){
        getline(cin, line);
        if(line == "-1"){break;}
        branches.push_back(ExtraxtInt(line));    
    }
        
    /*cout << "kitten = " << kitten_position << "\n"; 
    for(int i = 0; i < branches.size(); i++){
        string label = "branch " + to_string(i);
        print(label, branches[i]);
    }*/
    
    int path = kitten_position;
    int root = branches[1][0];
    string complete_path = to_string(path) + " ";
    int i = 1;
    //cout << branches.size();
    while(path != root){
        int tmp = branches[i][0];
        for(int j = 1; j < branches[i].size(); j++){
            if(branches[i][j] == path){
                complete_path = complete_path + to_string(tmp) + " ";
                path = tmp;
                i = 0;                
            }
        }
        /*if(i == branches.size() - 1){
            cout << "There isn't path\n";
            path = root;
            break;
        }*/
        i++;
    }
    cout << complete_path << "\n";
    return 0;
}