#include <iostream>

#include "funcs.hpp"

int main(){
    double a=2, b=-10, c=12;
    std::cout << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    std::vector<double> roots = quadratic_equation_roots(a,b,c);
    
    if(roots.size() > 0){
        std::cout << "roots: ";
        for(const auto& root : roots){
            std::cout << root << ' ';
        }
    }
    else{
        std::cout << "no roots";
    }
    std::cout << std::endl;

    return 0;
}