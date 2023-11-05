#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,s,i;
	printf("enter the frist number:\n");
	scanf("%d",&a);
	printf("enter the second:\n");
	scanf("%d",&b);
	printf("......menu......\n 1 for adition \n 2 for substraction \n 3 for multiplication \n 4 for division \n enter your choice:"); // fixed spelling and newline
	scanf("%d",&i); 
	if(i==1)
	s=a+b;
	else if(i==2)
	s=a-b;
	else if(i==3)
	s=a*b;
	else if(i==4)
	s=a/b;
	else
	printf("you entered wrong input");
	printf("the result is %d",s); 
	return 0;
}
