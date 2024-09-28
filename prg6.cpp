// Gauss Elimination Method

#include <bits/stdc++.h>
using namespace std;

void display(vector<double> &solution, int n)
{
    cout << "The roots of the Equations:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "x" << i + 1 << " = " << solution[i] << endl;
    }
}

void gauss_elimination(vector<vector<double>> &am, int n)
{

    // Forward Substitution
    for (int i = 0; i < n; i++)
    {
        double diag = am[i][i];
        for (int j = 0; j <= n; j++)
        {
            am[i][j] /= diag;
        }
        for (int j = i + 1; j < n; j++)
        {
            double factor = am[j][i];
            for (int k = 0; k <= n; k++)
            {
                am[j][k] -= factor * am[i][k];
            }
        }
    }

    vector<double> solution(n);
    // Backward Substitution
    for (int i = n - 1; i >= 0; i--)
    {
        solution[i] = am[i][n];
        for (int j = i + 1; j < n; j++)
        {
            solution[i] -= am[i][j] * solution[j];
        }
    }

    display(solution, n);
}

int main()
{
    int n;
    cout << "Enter number of equations" << endl;
    cin >> n;

    // Augumented Matrix
    vector<vector<double>> am(n, vector<double>(n + 1));

    cout << "Enter coeffients and their respective constants" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cin >> am[i][j];
        }
    }

    gauss_elimination(am, n);
}