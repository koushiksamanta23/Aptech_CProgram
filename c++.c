#include<stdio.h>
int main()
{
	int i,j,n,fact=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
		printf("The fact is=%d",fact);
	return 0;
}

