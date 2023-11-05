#include <stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n,p,k;
    printf("enter the row and column of a:\n");
    scanf("%d%d",&m,&n);
    printf("enter the elment of a:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of b:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
        c[i][j] = a[i][j] + b[i][j];
       }
    }
    printf("the matrix of c:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}    