#include<stdio.h>
int main()
{
	int stud[4][2];
	int i,j;
	for(i=0;i<=3;i++)
	{
		printf("\n enter roll no. and marks:\n"); 
		scanf("\n %d%d",&stud[i][0],&stud[i][1]);
	}
	for(i=0;i<=3;i++)
	printf("\n%d%d",stud[i][0],stud[i][1]);
	return 0;
}
