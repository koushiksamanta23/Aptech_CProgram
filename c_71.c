#include<stdio.h>
int main()
{
	int a=21;
	int b=10;
	int c;
    if(a==b) 
{
	printf("line 1 - a is equal to b\n");
}
else
{
	printf("line 1 - a is not equal to b\n");
}
if (a<b)
{
	printf("line 1 - a is less than b\n");
}
else
{
	printf("line 1 - a is not less than b\n");
}
if(a>b)
{
	printf("line 1 - a is greater than b\n");
}
else
{
	printf("line 3 - a is not greater than b\n");
}
/*lets change value of a and b*/
a=5;
b=20;
if (a<=b)
{
	printf("line 4 - a is either less than or equal to b\n");
}
if (a>=b)
{
	printf("line 5 - a is either greater than or equal to b\n");
}
return 0; 
} 