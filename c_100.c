#include<stdio.h>
int main()
{
    int ch;
    FILE *ptr;
    ptr = fopen("D:/cprog/first.txt","r");
    if(ptr==NULL)
    {
    	printf("file not present\n");
	}
	else
	{
		printf("file opened in read moad\n");
	}
    return 0;
}
