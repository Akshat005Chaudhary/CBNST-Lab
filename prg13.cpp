/*
Trapezoidal Method


Q) Find the solution of equation 1/x using Trapezoidal rule. Take a = 1 and b = 2
Take h = 0.25
*/


#include <bits/stdc++.h>
using namespace std;

// Given function: 1/x
double func(double x){
    return (1.0/x);
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
    double ans = (h/2)*((y[0]+y[4])+2*(y[1]+y[2]+y[3]));
    cout<<fixed<<setprecision(4);
    cout<<"Integration of y wrt x over "<<a<<" and "<<b<<" is "<<ans<<endl;
    return 0;
}