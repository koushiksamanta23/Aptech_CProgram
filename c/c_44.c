#include<stdio.h>
int main()
{
   int i,n;
   printf("\n enter a number:\n");
   scanf("%d",&n);
   printf("\n multiplication table of the number:\n");
   for(i=1;i<=10;i++)
   {
      printf("%d*%d=%d\n",n,i,(n*i));
   }
   return 0;
}