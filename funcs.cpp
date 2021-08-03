#include "funcs.hpp"
#include <cmath>

double square(double x){
    return x*x;
}

std::vector<double> quadratic_equation_roots(double a, double b, double c){
    // ax^2 + bx + c = 0
    double delta = square(b) - 4*a*c;
    if(delta > 0){
        double sqrt_delta = sqrt(delta);
        double x1 = (-b - sqrt_delta) / (2*a);
        double x2 = (-b + sqrt_delta) / (2*a);
        return std::vector<double>{x1,x2};
    }
    else if(delta == 0){
        double x = -b / (2*a);
        return std::vector<double>{x};
    }
    else{
        return std::vector<double>{};
    }
}
