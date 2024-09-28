// Bisection Method

#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x - x - 11;
}

void bisection(double a, double b)
{
    if (fx(a) * fx(b) >= 0)
    {
        cout << "Wrong Choice of a & b" << endl;
        return;
    }
    double c;
    while (b - a >= 0.01)
    {
        c = (a + b) / 2;
        if (fx(c) == 0)
            break;
        if (fx(a) * fx(c) < 0)
            b = c;
        else
            a = c;
    }
    // Use Rounding off STL function to round off to 4 digits
    cout << fixed << setprecision(4);
    cout << "Root of the equation is " << c << endl;
    return;
}

int main()
{
    double a = 2;
    double b = 3;
    bisection(a, b);
    return 0;
}