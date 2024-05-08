#include<iostream>

using namespace std;

int main(){
    int h,m;
    cin >> h >> m;

    if(m >= 45){
        cout << h << " " << m - 45;
    }else{
        if(h == 0){
            h = 23;
        }else{h--;}

        int tmp = 45 - m;
        m = 60 - tmp;
        cout << h << " " << m;
    }


    return 0;
}