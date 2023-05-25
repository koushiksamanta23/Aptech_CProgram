#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter principle\n");
	scanf("%d",&p);
	printf("enter rate of interset\n");
	scanf("%f",&r);
	printf("enter time\n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interset=%f",&si);
	return 0;
}

