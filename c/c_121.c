#include<stdio.h>
int main()
{
    int a,N,c,sum=0;
    printf("enter a number:\n");
    scanf("%d",&N);
    a=N;
    while(a>0)
    {
        c=a%10;
        sum=sum+c;
        a=a/10;
    }  
        if(N%sum==0)
        {
            printf("%d is a niven number",N);
        }
        else
        {
            printf("%d is not a niven number",N);
        }
    return 0;    
}