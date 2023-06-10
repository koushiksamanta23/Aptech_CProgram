#include<stdio.h>
int main()
{
    // 0 1 1 2 3 5 8 ....n
    double n,a=0,b=1,c,i;
    printf("Enter number of terms.......\n");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        printf("%lf ",a); 
        c=a+b;
        a=b;
        b=c;
    }    
    return 0;
}