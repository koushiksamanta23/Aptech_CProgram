#include <stdio.h>
/********************************************/
/*         READING OF REAL NUMBERS         */   
/******************************************/
int main()
{
    float x,y;
    double p,q;
    printf("value of x and y\n");
    scanf("%f %e",&x,&y);
    printf("\n");
    printf("x = %f\ny = %f\n\n",x,y);
    printf("value of p and q\n");
    scanf("%lf %lf",&p,&q);
    printf("\n");
    printf("p = %lf\nq = %lf\n\n",p,q);
    printf("p = %.12f\nq = %.12e",p,q);
    return 0;
}