#include <iostream>
#include <fstream>
#include <cmath>
#define g 9.81
int main() {
    std::ifstream input_file("in.txt");
    double h0;
    input_file >> h0;
    double vx;
    double vy;
    input_file >> vx >>vy;
    double v0 = sqrt(vx*vx + vy*vy);
    double a = atan(vx / vy);
    double c = cos(a);
    double y(double x) {
        return (h0 + x *(vx/vy) - (g * x ^ 2) / (2 * v0 ^ 2 * c * c));
    }
    double x1;
    double x2=0;
    double h1;
    double h2=1000;
    int k=0;
    while (input_file){
        input_file >> x1 >>h1;
        if (y(x1)<=h1){
            x1=2*x1-x2;
            if (y(x1)<=h2){
                return(k-1)
            }
            return (k);
        }
        else{
            x2=x1;
            h2=h1;
            k=k+1;
        }
    }
}

