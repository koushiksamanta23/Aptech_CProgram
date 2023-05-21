#include<stdio.h>
#define PI 3.1415926
int main()
{
    float r,s;
    printf("enter the readius of a circle:\n");
    scanf("%f",&r);
    s=PI*r*r;
    printf("the area of a circle is %f",s);
    return 0;
}
