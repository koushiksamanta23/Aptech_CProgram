// write a program to multiply two matures//
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,m,n,p,k;
    printf("enter the row and column of a:\n");
    scanf("%d%d",&m,&n);
    printf("enter the elment of a:\n");
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
         scanf( "%d",&a[i][j]);
        }
        printf("\n");
      }    
 printf("enter the row and column of b:\n");
 scanf("%d%d",&n,&p);
 printf("enter the element of b:\n"); 
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
 printf("the element of matrix a:\n");
 for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
 printf("the  matrix b is:\n");
 for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
 printf("the product of matrix a and matrix b is :\n");
 for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n\n");
    }
    return 0;
} 
