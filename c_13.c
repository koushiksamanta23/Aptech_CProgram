#include<stdio.h>
int main()
{
	int a,b,s,i;
	printf("enter the number:\n");
	scanf("%d",&a);
	printf("enter the number:\n");
	scanf("%d",&b);
	printf(".....menu.....\n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division \n enter you choice");
	scanf("%d",&i);
	switch(i)
	
	{
		case 1:s=a+b;
		break;
		case 2:s=a-b;
		break;
		case 3:s=a*b;
		break;
		case 4:s=a/b;
		break;
		printf("wrong choice");
		break;	
	}
	printf("the result is %d",s);
	return 0;
}
