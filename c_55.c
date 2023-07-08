#include<stdio.h>
int main()
{
    int no,b,f;
    printf("enter any number\n");
    scanf("%d",&no);
    f=no%10;
    while(no!=0)
    {
        b=no%10;
        no=no/10;
    }
    printf("frist digit=%d and last digit=%d",b,f);
    return 0;
}