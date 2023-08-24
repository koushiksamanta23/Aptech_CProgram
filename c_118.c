#include<stdio.h>
int main()
{
    int a[3][3],i,j,m,n;
    printf("enter the row and colum of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the element of the matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                a[i][j]=0;
            }
        }
    }
    printf("upper triangle form:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}