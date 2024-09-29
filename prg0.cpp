// Quadratic Equation

#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("\nRoots are real and repeated: %.2lf\n", root1);
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("\nRoots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        printf("Name: Akshat Chaudhary\n");
        printf("Roll.No:08\n");
        printf("Section: A-RQ");
    }
    return 0;
}
