#include "functions.h"

// Function Definition
//the definition specifies the body for a function, associates an identifier with the function, and allocates storage for it.

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 !=0) {
        return num1 / num2;
    }else {
        return 0.0;
    }
}