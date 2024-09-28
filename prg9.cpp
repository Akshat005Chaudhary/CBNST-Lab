// Newton Backward Method

/*

Q) Find f(1925)
   x: 1891, 1901, 1911, 1921, 1931
   y: 46, 66, 81, 93, 101

*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

int main()
{
    vector<double> x = {1891, 1901, 1911, 1921, 1931};
    vector<double> y = {46, 66, 81, 93, 101};
    vector<vector<double>> mat(5, vector<double>());
    mat[0] = y;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < mat[i - 1].size(); j++)
        {
            mat[i].push_back(mat[i - 1][j] - mat[i - 1][j - 1]);
        }
    }

    /*

    // Chking if correct values were fed into matrix:

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    */

    // Method used is for equidistant data
    // h = x[1] - x[0]
    int h = 10;

    // double u = (1925.0 - 1931.0) / 10.0;
    double u = -0.6;

    double ans = mat[0][4] + u * mat[1][3] + (u * (u + 1) * mat[2][2]) / factorial(2) + (u * (u + 1) * (u + 2) * mat[3][1]) / factorial(3) + (u * (u + 1) * (u + 2) * (u + 3) * mat[4][0]) / factorial(4);

    cout << "fx(1895) = " << ans << endl;

    return 0;
}