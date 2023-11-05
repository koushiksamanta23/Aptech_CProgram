#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d%d",&a,&b); //a=100 b=200
	a=a+b; //a=300 b=200
	b=a-b; //b=100
	a=a-b; //a=200
	printf("a=%d b=%d",a,b); //a=200 b=100
	return 0;
}
