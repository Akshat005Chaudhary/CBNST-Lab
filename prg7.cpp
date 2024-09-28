// Gauss Jordan Method

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

void gauss_jordan(vector<vector<double>> &am, int n)
{

    // Forward Substitution
    for (int i = 0; i < n; i++)
    {
        // Normalize the diagonal elements to 1
        double diag = am[i][i];
        for (int j = 0; j <= n; j++)
        {
            am[i][j] /= diag;
        }
        // Make the elements above and below the diagonal 0
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                double factor = am[j][i];
                for (int k = 0; k <= n; k++)
                {
                    am[j][k] -= factor * am[i][k];
                }
            }
        }
    }

    vector<double> solution(n);
    for (int i = 0; i < n; i++)
    {
        solution[i] = am[i][n];
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

    gauss_jordan(am, n);
}