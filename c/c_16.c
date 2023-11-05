#include<stdio.h>
int main()
{
	int i,s;
	s=0;
	i=100;
	while(i>=2)
	{
		s=s+i;
		i=i-2;
	}
	printf("the sum of the series is%d",s);
	return 0;
}

