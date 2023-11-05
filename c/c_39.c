#include<stdio.h>
int main()
{
 int n,p=1,t;
 printf("enter the number:\n");
 scanf("%d",&n);
 while(n!=0) 
 {
 t=n%10;
 n=n/10;
 p=p*t;
 }
 printf("the product is %d",p);
 return 0;
}