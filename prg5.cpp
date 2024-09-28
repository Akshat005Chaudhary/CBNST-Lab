// Newton Raphson Method

#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x - 3 * x - 5;
}

double ffx(double x)
{
    return 3 * x * x - 3;
}

void newton_raphson(double a, double b)
{
    if (fx(a) * fx(b) >= 0)
    {
        cout << "Wrong Choice of a & b" << endl;
        return;
    }
    double c;
    double prev = a;
    while (true)
    {
        c = prev - fx(prev) / ffx(prev);
        if (fabs(c - prev) < 0.001)
            break;
        prev = c;
    }
    cout << fixed << setprecision(4);
    cout << "Root of the equation is " << c << endl;
    return;
}

int main()
{
    double a = 2;
    double b = 3;
    newton_raphson(a, b);
    return 0;
}