#include<stdio.h>
/*function declartion*/
void func(void);
static int count = 5;
int  main()
{
	while(count--)
	{
	fun();
	}
	return 0;
}
/*function definition*/
void fun(void)
{
	static int i = 5;
	i++;
	printf("i is %d and count is %d\n",i,count);
}

