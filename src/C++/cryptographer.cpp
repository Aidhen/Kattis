#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(void){
    string line;
    string name = "PER";
    cin >> line;
    int days = 0;
    for(int i = 0; i < line.length(); i++)
    {
        if(line[i] != name[i%3]) { days++; }
    }

    cout << days;
    return 0;
}