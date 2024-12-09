/*
Simpson's Three-Eighth Method


Q) Find the solution of equation 1+x^2 using Simpson's 3/8th rule. Take a = 0 and b = 6
Take h = 0.5
*/


#include <bits/stdc++.h>
using namespace std;

// Given function: 1 + x^2
double func(double x){
    return 1.0/(1+x*x);
}


int main(){
    double a, b, h, aa;
    cout<<"Input a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter h"<<endl;
    cin>>h;
    aa = a;
    int n(0);
    while(aa<=b){
        aa += h;
        n++;
    }
    cout<<n<<endl;
    vector<double> x;
    vector<double> y;
    for(int i=0;i<n;i++){
        x.push_back(a+(i*h));
        y.push_back(func(x[i]));
    }
    // First solve in notebook to find the exact formula for each dataset
    double ans = (3*h/8)*((y[0]+y[6])+3*(y[1]+y[2]+y[4]+y[5])+2*(y[3]+y[6]));
    cout<<fixed<<setprecision(4);
    cout<<"Integration of y wrt x over "<<a<<" and "<<b<<" is "<<ans<<endl;
    return 0;
}
