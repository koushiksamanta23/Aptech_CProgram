#include<stdio.h>
int main()
{
	const int length = 10;
	const int width = 5;
	const char newline = '\n';
	int area;
	area = length * width;
	printf("value of area : %d",area);
	printf("%c",newline);
	return 0;
}
