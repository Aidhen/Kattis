#include<iostream>

using namespace std;

int main(){
    int width, pieces, area = 0;
    cin >> width >> pieces;

    for(int i = 0; i < pieces; i++){
        int l1, l2;
        cin >> l1 >> l2;
        area = area + l1*l2;
    }

    cout << area/width;
    return 0;
}