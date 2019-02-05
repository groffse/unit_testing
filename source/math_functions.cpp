#include "math_functions.hpp"
#ifdef MATH_FUNCTIONS_H

int math_f::factorial(int n) {
    if(n > 0) {
        return factorial(n-1)*n;
    }
    else
        return 1;
}

#endif