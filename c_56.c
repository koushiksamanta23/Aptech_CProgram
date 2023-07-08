#include<stdio.h>
int main()
{
    int no,b,m=1;
    printf("enter any number\n");
    scanf("%d",&no);
    while(no!=0)
{
    b=no%10;
    m=m*b;
    no=no/10;
}
    printf("total multiply of digits=%d",m);
    return 0;
}