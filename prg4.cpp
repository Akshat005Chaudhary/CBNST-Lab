// Iteration Method

#include <bits/stdc++.h>
using namespace std;

double fx(double x)
{
    return x * x * x + x * x - 1;
}

double gx(double x)
{
    return 1 / (sqrt(1 + x));
}

void iteration_method(double a, double b)
{
    if (fx(a) * fx(b) >= 0)
    {
        cout << "Wrong Choice of a & b" << endl;
        return;
    }
    double c;
    double prev = (a + b) / 2.0;
    while (true)
    {
        c = gx(prev);
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
    double a = 0;
    double b = 1;
    iteration_method(a, b);
    return 0;
}