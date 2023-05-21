#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers:\n"); 
	scanf("%d%d",&a,&b);//a=100 b=200
	printf("\n the numbers before swapping a=%d & b=%d\n",a,b);
	a=a*b;//a=250 b=350
	b=a/b;
	a=a/b;
	printf("a=%d b=%d",a,b);//a=200 b=100//a=350 b=250
    printf("\n the numbers after swapping a=%d & b=%d\n",a,b);
	return 0;
}

