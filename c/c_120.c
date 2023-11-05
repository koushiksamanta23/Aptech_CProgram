#include<stdio.h>
int main()
{
    int c,N,s=0,y;
    printf("enter a number:\n0");
    scanf("%d",&N);
    c=N+N;
    while(c>0)
    {
        y=c%10;
        s=s+y;
        c=c/10;
    }
    if(s==N)
    {
        printf("%d IS A NEON NUMBER",N);
    }
    else
    {
        printf("%d IS NOT A NEON NUMBER",N);
    }
    return 0;
}