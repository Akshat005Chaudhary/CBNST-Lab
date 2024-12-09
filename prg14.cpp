/*
Simpson's One-Third Method


Q) Find the solution of equation 2x^3-4x+1 using Simpson's 1/3rd rule. Take a = 2 and b = 4
Take h = 0.5
*/


#include <bits/stdc++.h>
using namespace std;

// Given function: 2x^3 - 4x + 1
double func(double x){
    return (double)(2*x*x*x - 4*x + 1);
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
    // cout<<n<<endl;
    cout<<n<<endl;
    vector<double> x;
    vector<double> y;
    for(int i=0;i<n;i++){
        x.push_back(a+(i*h));
        y.push_back(func(x[i]));
    }
    // First solve in notebook to find the exact formula for each dataset
    double ans = (h/3)*((y[0]+y[4])+4*(y[1]+y[3])+2*(y[2]));
    cout<<fixed<<setprecision(4);
    cout<<"Integration of y wrt x over "<<a<<" and "<<b<<" is "<<ans<<endl;
    return 0;
}