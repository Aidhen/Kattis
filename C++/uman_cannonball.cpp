#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;


int main(void){
    constexpr float pi = 3.14;//3.14159265359;
    constexpr float g = 9.81;

    int cases;
    float vo,theta,x1,h1,h2;
    cin >> cases;

    int result[cases]={};
    float radiant_theta, time, h;

    for(int i = 0; i < cases; i++){
        cin >> vo >> theta >> x1 >> h1 >> h2;

        radiant_theta = theta/180 *pi;
        time = x1/(vo*cos(radiant_theta));
        
        h =  vo*sin(radiant_theta)*time - 0.5*g*pow(time,2);

        if(h > h1+1 && h < h2-1){
            result[i] = 1;
        }
    }

    for(int i = 0; i < cases; i++){
        if(result[i] == 1){
            cout << "Safe\n";
        }
        else{
            cout << "Not Safe\n";
        }
    }

    return 0;
}
