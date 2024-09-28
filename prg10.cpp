// Gauss Forward Method

/*

Q) Find f(3.5)
   x: 1, 2, 3, 4, 5
   y: 1, -1, 1, -1, 1

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
    vector<double> x = {1, 2, 3, 4, 5};
    vector<double> y = {1, -1, 1, -1, 1};
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
    int h = 1;

    // Take a as 3, then
    // double u = (3.5 - 3.0) / 1.0;
    double u = 0.5;

    double ans = mat[0][2] + u * mat[1][2] + (u * (u - 1) * mat[2][1]) / factorial(2) + ((u + 1) * u * (u - 1) * mat[3][1]) / factorial(3) + ((u + 1) * u * (u - 1) * (u - 2) * mat[4][0]) / factorial(4);

    cout << "fx(3.5) = " << ans << endl;

    return 0;
}