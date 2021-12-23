#include <iostream>
#include <fstream>
#include <valarray>


int main(){
    std::ifstream input_file("in.txt");
    double xn;
    double yn;
    input_file >> xn >> yn;
    double xr=xn;
    double xl=xn;
    double yr=yn;
    double yl=yn;
    double a = atan(xn/yn);
    double s = sin(a);
    double c = cos(a);
    while (input_file){
        input_file >> xn >> yn;
        double x1=xn*c+yn*s;
        double y1=yn*c-xn*s;
        if (x1>xr){
            x1=xr;
            y1=yr;
        }
        if (x1<xl){
            x1=xl;
            y1=yl;
        }
    }
    std::cout << "Самая правая: " << xr << ' ' << yr;
    std::cout << "Самая левая:" << xl << ' ' << yl;
    return 0;
}
