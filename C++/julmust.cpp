#include <iostream>
#include <string>
using std::cout;
using std::cin; 
using std::string;

int main(void){
    int max_bottles, min_bottles = 0; string r;
    cin >> max_bottles;
    
    int counter = 1;

    while(r.compare("exact") != 0)
    {
        cout << (max_bottles + min_bottles)/2 * counter << "\n" << std::flush;
        cin >> r;
        if(r.compare("less") == 0)
        {
            max_bottles = (max_bottles + min_bottles) / 2 - 1; 
        }
        else if(r.compare("more") == 0)
        {
            min_bottles = (min_bottles + max_bottles)/2 + 1;
        }
        else if(r.compare("exact") == 0)
        {
            break;
        }
        
        counter++;
    }

    return 0;
}