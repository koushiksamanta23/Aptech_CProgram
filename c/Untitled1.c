#include<stdio.h>
#define PI 3.1415926
int main()
{
	float r,s;
	printf("Enter the redius of a circle");
	scanf("%f",&r);
	s=PI*r*r;
	printf("the area of a circle is %f",s);
	return 0;
}
