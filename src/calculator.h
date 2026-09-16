#ifndef CALCULATOR_H
#define CALCULATOR_H
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
#endif
// src/calculator.c
#include "calculator.h"
#include <stdio.h>
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
if (b == 0.0) {
printf("Error: Division by zero!\n");
return 0.0;
}
return a / b;
}
