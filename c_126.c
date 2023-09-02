#include<stdio.h>
int sum(int);
int rsum(int);
int main()
{
    int r,s,rs; // use r instead of n
    printf("enter a five digit number:\n");
    scanf("%d",&r); // use r instead of n
    s=sum(r); // use r instead of n
    printf("\n sum of digits without using recursion is %d",s);
    rs=rsum(r); // use r instead of n and sum instead of rsum
    printf("\n sum of digits using recursion is %d",rs);
}
int sum(int num) // use num instead of sum
{
    int sum=0,remainder;
    while(num>0)
    {
        remainder=num%10;
        sum=remainder+sum;
        num=num/10; // use num instead of sum
    }
    return(sum);
}
int rsum(int num)
{
	int sum=0,remainder;
	if(num!=0) // use if instead of while
	{
		remainder=num%10;
		sum=remainder+rsum(num/10); // use sum instead of rsum
	}
	return(sum);
}