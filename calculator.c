#include "calculator.h"
#include <limits.h>  // For INT_MAX

int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        return INT_MAX; // Return an error code for divide by zero
    }
    return a / b;
}