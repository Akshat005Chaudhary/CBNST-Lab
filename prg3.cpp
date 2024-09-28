// Secant Method

#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x - 5 * x + 1;
}

void secant(double a, double b)
{
    // Might not need initial guesses on the
    // value of a & b
    // As intervals will be given
    if (fx(a) * fx(b) >= 0)
    {
        cout << "Wrong Choice of a & b" << endl;
        return;
    }
    double c;
    while (b - a >= 0.001)
    {
        c = b - ((b - a) / (fx(b) - fx(a))) * fx(b);
        if (fx(c) == 0)
            break;
        if (fx(a) * fx(c) < 0)
            b = c;
        else
            a = c;
    }
    cout << "Root of the equation is " << c << endl;
    return;
}

int main()
{
    double a = 0;
    double b = 0.5;
    secant(a, b);
    return 0;
}