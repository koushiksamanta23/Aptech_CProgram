#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a%2==0)
	printf("%d is an even number\n",a); 
	else if(a%2==1) 
	printf("%d is an odd number\n",a); 
	return 0;
}
