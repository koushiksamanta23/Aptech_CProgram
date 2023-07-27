#include<stdio.h>
/********************************************/
/*     SOLUTION OF QUADRATIC EQUATION      */
/******************************************/
#include <math.h>
int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("%f %f %f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    printf("\n\nROOTS ARE IMAGINARY\n");
    else
    {
        root1 = (-b + sqrt(discriminant))/(2.0*a);
        root2 = (-b - sqrt(discriminant))/(2.0*a);
        printf("\n\nroot1 = %5.2f\n\nroot2 = %5.2f\n",root1,root2);
    }
    return 0;
}
