#include<stdio.h>
int main()
{
    int num;
    printf("\n enter a number:\n");
    scanf("%d",&num);
    printf("\n the binary equivalent is ");
    binary(num);
    getch();
}
binary(int n)
{
   int r;
   r=n%2;
   n=n/2;
   if(n==0)
   {
    printf("\n the binary equivalent is %d",r);
    return(r);
   }
   else 
   binary(n);
   printf("%d",r);
}