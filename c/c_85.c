#include<stdio.h>
/***********************************************/
/*      PROGRAM SHOWING ROUND OFF ERRORS      */
/*           sum of n term of 1\n            */
/********************************************/
int main()
{
    float sum,n,term;
    int count = 1;
    sum = 0;
    printf("enter value of n\n");
    scanf("%f",&n);
    term = 1.0/n;
    while(count <= n)
    {
        sum = sum + term;
        count++;
    }
    printf("sum = %f\n",sum);
}
