// Regular Falsi Method

#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x - 5 * x + 3;
}

void regula_falsi(double a, double b)
{
    if (fx(a) * fx(b) >= 0)
    {
        cout << "Wrong Choice of a & b" << endl;
        return;
    }
    double c;
    while (b - a >= 0.001)
    {
        c = a - ((b - a) / (fx(b) - fx(a))) * fx(a);
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
    double a = 0.6;
    double b = 0.7;
    regula_falsi(a, b);
    return 0;
}