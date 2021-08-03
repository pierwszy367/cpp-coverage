#include "funcs.hpp"

#include <cassert>


void square_test(){
    assert(square(1) == 1);
    assert(square(3) == 9);
    assert(square(-2) == 4);
    assert(square(0) == 0);
}

void quadratic_equation_roots_test(){
    assert(quadratic_equation_roots(1,1,1) == std::vector<double>{});
    assert(quadratic_equation_roots(1,-2,1) == std::vector<double>{1});
    assert(quadratic_equation_roots(2,-10,12) == std::vector<double>({2,3}));
}


int main(){
    square_test();
    quadratic_equation_roots_test();
}
