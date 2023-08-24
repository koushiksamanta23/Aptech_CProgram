#include<stdio.h>
int main()
{
int a[3][3],i,j,m,n,t=0;
    printf("enter the row and column of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("now enter the elements\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            t=t+a[i][j];
        }
    }
    printf("trace=%d",t);
    return 0;
}