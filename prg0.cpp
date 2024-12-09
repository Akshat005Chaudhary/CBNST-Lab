// Quadratic Equation


// Note: setprecision(x) sets the precision for all subsequent floating-point output on the given std::ostream (e.g., std::cout) until the precision is explicitly changed again or the program ends.


#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    cout<<fixed<<setprecision(2);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<"Roots are real and distinct: "<<root1<<" and "<<root2<<endl;
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        cout<<"Roots are real and repeated: "<<root1<<endl;
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout<<"Roots are complex: "<<realPart<<" + "<<imaginaryPart<<"i and"<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    return 0;
}