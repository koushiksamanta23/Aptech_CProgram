#include<stdio.h>
int main()
{
	//a=10 b=20
	//a=20 b=10
   int a,b,temp;
   printf("enter the two number:\n");
   scanf("%d%d",&a,&b);//a=10 b=20
   printf("\n The numbers before swapping a=%d & b=%d\n",a,b);
   temp=a;//temp=10
   a=b;//a=20
   b=temp;//b=10
   printf("\n The numbers after swapping a=%d & b=%d\n",a,b);
   return 0;
}
