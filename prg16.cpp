/*
Runge-Kutta Method
 
Q) Find y(0.1) for y'' = 1 + 2*x*y - x^2*z; x = 0, y = 1, z = 0; 
with step length of 0.1 using Runge-Kutta Method (2nd Order Derivative)
*/


#include <bits/stdc++.h>
double f(double x, double y, double z) 
{
    return z;  // y' = z
}
double g(double x, double y, double z) 
{
    return 1 + 2 * x * y - x * x * z;  
}

int main() 
{
    double x0 = 0, y0 = 1, z0 = 0, h = 0.1;  
    double x = x0, y = y0, z = z0;
    double k1, l1, k2, l2;
    k1 = h * f(x, y, z);
    l1 = h * g(x, y, z);
    k2 = h * f(x + h, y + k1, z + l1);
    l2 = h * g(x + h, y + k1, z + l1);
    y = y + (k1 + k2) / 2;
    z = z + (l1 + l2) / 2;
    printf("y(0.1) = %.5f\n", y);
    return 0;
}   
