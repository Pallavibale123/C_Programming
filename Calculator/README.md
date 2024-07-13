#ifndef FUNCTIONS_H : These lines are include guards. They prevent the header file from being included multiple times in the same compilation unit, which can happen if the header is included by multiple files.

Function declarations: Each function is declared here with its return type (double) and parameter list (double num1, double num2). These declarations specify the function names (add, subtract, multiply, divide) and their signatures but do not provide the implementation details. They serve as a contract between different parts of the program, ensuring that functions are called correctly with the right types of arguments.

#include "functions.h": This line includes the functions.h header file, allowing the definitions in functions.c to use the function declarations from functions.h.

Function definitions: Here, each function declared in functions.h is defined with its implementation.

add(double num1, double num2): Adds num1 and num2 and returns the result.

subtract(double num1, double num2): Subtracts num2 from num1 and returns the result.

multiply(double num1, double num2): Multiplies num1 and num2 and returns the result.

divide(double num1, double num2): Divides num1 by num2 and returns the result. It includes a check for division by zero to avoid runtime errors.

#include <stdio.h>: This line includes the standard input-output library which provides functions like printf and scanf.

#include "functions.h": This line includes the functions.h header file, allowing calculator.c to use the function declarations (add, subtract, multiply, divide) defined in functions.c.

int main() { ... }: This is the entry point of the program where execution begins.

Variables:

char operator: Holds the operator entered by the user (+, -, *, /).
double num1, num2, result: Variables to store the two numbers input by the user and the result of the calculation.
User Input:

printf("Enter an operator (+, -, *, /): ");: Prompts the user to enter an operator.

scanf(" %c", &operator);: Reads the operator entered by the user. Note the space before %c in scanf to skip any leading whitespace characters.

printf("Enter two numbers: ");: Prompts the user to enter two numbers.

scanf("%lf %lf", &num1, &num2);: Reads two double-precision floating-point numbers entered by the user.

Switch Statement (switch (operator) { ... }):

Evaluates the operator variable entered by the user and performs the corresponding arithmetic operation using functions from functions.c.

case '+' ... case '-': ... case '*': ... case '/':: Each case handles a different operator (+, -, *, /). It calls the respective function (add, subtract, multiply, divide) with num1 and num2 as arguments and stores the result in result.

printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);: Prints the operation performed along with the result, formatted to two decimal places (%.2lf).

default:: Handles cases where the entered operator is not one of +, -, *, or /.

return 0;: Indicates successful completion of main() function and termination of the program.
