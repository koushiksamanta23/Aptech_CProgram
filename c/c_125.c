#include<stdio.h>
int main()
{
    int rown,i,j;
    printf("enter the number of row:\n");
    scanf("%d",&rown);
    for(i=1;i<=rown;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
