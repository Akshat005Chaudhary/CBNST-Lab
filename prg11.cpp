// Gauss Backward Method

/*

Q) Find f(1976)
   x: 1940, 1950, 1960, 1970, 1980, 1990
   y: 17, 20, 27, 32, 36, 38

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
    vector<double> x = {1940, 1950, 1960, 1970, 1980, 1990};
    vector<double> y = {17, 20, 27, 32, 36, 38};
    vector<vector<double>> mat(6, vector<double>());
    mat[0] = y;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < mat[i - 1].size(); j++)
        {
            mat[i].push_back(mat[i - 1][j] - mat[i - 1][j - 1]);
        }
    }

    /*

    // Chking if correct values were fed into matrix:

    for (int i = 0; i < 6; i++)
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

    // double u = (1976.0 - 1970.0) / 10.0;
    double u = 0.6;

    double ans = mat[0][3] + u * mat[1][2] + ((u + 1) * u * mat[2][2]) / factorial(2) + ((u + 1) * u * (u - 1) * mat[3][1]) / factorial(3) + ((u + 2) * (u + 1) * u * (u - 1) * mat[4][1]) / factorial(4) + ((u + 2) * (u + 1) * u * (u - 1) * (u - 2) * mat[5][0]) / factorial(5);

    cout << "fx(1976) = " << ans << endl;

    return 0;
}