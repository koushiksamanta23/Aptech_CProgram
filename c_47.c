#include<stdio.h>
/**********************************************************************************/
/*                     program to print multiplication table                      */
/**********************************************************************************/
#define rows      5
#define columns   5
int main()
{
    int row, column, product[rows][columns];
    int i,j;
    printf("multiplication table\n\n");
    printf("  ");
    for(j=1;j<=columns;j++)
    printf("%4d",j);
    printf("\n");
    printf("_____________________\n");
    for(i=0;i<rows;i++)
    {
        row=i+1;
        printf("%2d",row);
        for(j=1;j<=columns;j++)
        {
           column=j;
           product[i][j]=row*column;
           printf("%4d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}