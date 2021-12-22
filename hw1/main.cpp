#include <iostream>
#include <fstream>
#include <valarray>


int main(){
    std::ifstream input_file("in.txt");
    float xn;
    float yn;
    input_file >> xn >> yn;
    float xr=xn;
    float xl=xn;
    float yr=yn;
    float yl=yn;
    double a = atan(xn/yn);
    while (input_file){
        input_file >> xn >> yn;
        float x1=xn*cos(a)+yn*sin(a);
        float y1=yn*cos(a)-xn*sin(a);
        if (x1>xr){
            x1=xr;
            y1=yr;
        }
        if (x1<xl){
            x1=xl;
            y1=yl;
        }
    }
    cout << "Самая правая: " << xr << ' ' << yr;
    cout << "Самая левая:" << xl << ' ' << yl;
    return 0;
}
