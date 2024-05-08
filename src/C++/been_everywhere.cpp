#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::cin; 
using std::map;
using std::string;

int main(void){
    int T;
    cin >> T;

    int n;
    map<string, int> travels;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        travels.clear();
        for(int j = 0; j < n; j++)
        {
            string tmp;
            cin >> tmp;
            travels[tmp] = 0;
        }
        cout << travels.size() << std::endl;
    }


    return 0;
}