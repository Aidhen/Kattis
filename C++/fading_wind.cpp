#include<iostream>
using std::cout; 
using std::cin; 

int main(void){
    int h,k,v,s,d = 0;
    cin >> h >> k >> v >> s;

    while(h > 0)
    {
        v = v + s;
        if(v/10 > 1) { v = v -v/10; }
        else { v = v - 1; }
        
        if(v >= k) {h = h + 1 ; }
        else if (v > 0 && v < k) 
        { 
            h = h - 1;
            if( h == 0) { v = 0; }
        }
        else { h = 0; v = 0;}
        d = d + v;

        if (s > 0) { s = s - 1;}
    }

    cout << d;
    return 0;
}