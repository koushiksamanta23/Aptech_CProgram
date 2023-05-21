#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter an integer value: ");
	scanf("%d", &num);
	if(num>=0)
	printf("%d is a poditive number ",num);
	else
	printf("%d is a negative number",num);
	return 0;
}
