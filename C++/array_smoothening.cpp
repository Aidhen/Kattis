#include <iostream>
#include <map>
#include <queue>
using std::cout; 
using std::cin;
using std::map;
using std::priority_queue; 


int main(void){
    int n, k, key;
    cin >> n >> k;
    map<int,int> m = {};
    priority_queue <int> q;

    for(int i = 0; i < n; i++)
    { 
        cin >> key;
        m[key] += 1;
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        q.push(i->second);
    }

    
    for(int i = 0; i < k; i++)
    {
        key = q.top() - 1;
        q.pop();
        q.push(key);
    }
    cout << q.top();

    return 0;
}