#include<stdio.h>
int main()
{
    int n,r,rev=0,temp;
    printf("enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;  
    }
    if(temp==rev)
    {
        printf("%d is palindrome",temp);
    }
    else // use curly braces here
    {
        printf("%d is not palindrome",temp);
    }
    return 0;
}