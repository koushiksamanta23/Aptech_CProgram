#include<stdio.h>
int main()
{
    int i,j,n,l;
    printf("enter the last number of line:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i-1;j++)
        printf(" ");
        for(l=1;l<=n-j;l++)
        printf("*");
        printf("\n");
    }
    return 0;
}