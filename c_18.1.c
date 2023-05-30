#include<stdio.h>
void main()
{
	int s,i;
	float k=0.0;
	for(i=1;i<100;i++)
	{
		k=k+i/((float)i+1);
		printf("%d,%d\n",i,(i+1));
	}
	printf("the sum of the series is %f",k);
	//return 0;
}
