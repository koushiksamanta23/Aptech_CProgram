#include<stdio.h>
int main()
{
	int num[]={24,34,12,44,56,17};
	int i;
	for(i=0;i<=5;i++)
	{
		printf("\n address=%u",&num[i]);
		printf("element=%d",num[i]);
	}
	return 0;
}
