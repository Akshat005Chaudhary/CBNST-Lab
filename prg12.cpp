/* 
Legrange Method 


Find y(x) for x=301
x: 300, 304, 305, 307
y: 2.4711, 2.4829, 2.4843, 2.4871
*/


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double ans;

void solve(vector<double>& x, vector<double>& y, int &n, double &op){
    for(int i=0;i<n;i++){
        double val_up = 1.0;
        double val_down = 1.0;
        for(int j=0;j<n;j++){
            if(j!=i) val_up *= (op-x[j]);
            if(j!=i) val_down *= (x[i]-x[j]);
        }
        ans += (val_up/val_down)*y[i];
    }
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    double op;
    cout<<"Enter op"<<endl;
    cin>>op;
    vector<double> x(n);
    vector<double> y(n);
    cout<<"Enter Values of x"<<endl;
    for(int i=0;i<n;i++) cin>>x[i];
    cout<<"Enter Values of y"<<endl;
    for(int i=0;i<n;i++) cin>>y[i];
    solve(x, y, n, op);
    cout<<"The Value of the function at x = "<<op;
    cout<<fixed<<setprecision(4);
    cout<<" is "<<ans<<endl;
    return 0;
}