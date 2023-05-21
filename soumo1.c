#include<stdio.h>
int main()
{
	int a;
	printf("enter the age of user\n");
	scanf("%d",&a);  
	if(a>=18)
	     printf("user can give the vote");
    else
         printf("user cannot give the vote");
    getch();
}
