#include<iostream>
#include<cmath>

using namespace std;

constexpr double pi = 3.14159265359;

double dtor(double degree){
    double radiant = degree/180*pi;
    return radiant;
}

int main(void){
    constexpr int xy_degree = 3;
    constexpr int x = 0;
    constexpr int y = 1; 
    constexpr int degree = 2;
    

    int tests, movements = 0;
    cin >> tests;
    double results[tests][2] = {0.0};

    for(int i = 0; i < tests; i++){
        cin >> movements;
        double position[xy_degree]={0.0, 0.0, 90};

        for(int j = 0; j < movements; j++){

            double rotation,distance;
            cin >> rotation >> distance;
            
            position[degree] += rotation;
            if(position[degree] != 90 && position[degree] != 270 && position[degree] != -90 && position[degree] != -270){
                position[x] = position[x] + cos(dtor(position[degree])) * distance;
            }
            if(position[degree] != 0 && position[degree] != 180 && position[degree] != 360 && position[degree] != -180){
                position[y] = position[y] + sin(dtor(position[degree])) * distance;
            }

        }
        results[i][x] = position[x];
        results[i][y] = position[y];
    }

    for(int i = 0; i < tests; i++){
        cout << results[i][x] << " " << results[i][y] << "\n";
    }

    return 0;
}

