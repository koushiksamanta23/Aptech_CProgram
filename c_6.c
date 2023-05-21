#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of the student\n");
	scanf("%d",&n);
	if(n>=91&&n<=100)
	printf("grade:o,outstanding");
	else if(n>=81&&n<=90)
	printf("grade:e,excellent");
	else if(n>=71&&n<=80)
	printf("grade:a,very good");
	else if(n>=61&&n<=70)
	printf("grade:b,good");
	else if(n>=51&&n<=60)
	printf("grade:c,satisfactory");
	else if(n>=41&&n<=50)
	printf("grade:d,standard");
	else
	printf("fail");
	return 0;
}
