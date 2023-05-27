#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter principle\n");
	scanf("%d",&p);
	printf("enter rate of interset\n");
	scanf("%d",&r);
	printf("enter time\n");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("simple interset=%d\n",si);
	return 0;
}

