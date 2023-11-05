#include<stdio.h>
int main()
{
    int a[3][3],i,j,m,n;
    printf("enter the row and column of the matrix\n");
    scanf("%d%d",&m,&n);
    if(m==n)
{
    printf("now enter the element\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            a[i][j]=0;
        }
    }
    printf("display the matrix term\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  }
  else
  printf("required term is not possible");
  return 0;
}