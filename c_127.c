#include<stdio.h>
int prime(int);
int factor(int);
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    printf("prime factor of %d are without recursion are\n",num);
    prime(num);
    printf("\n\n prime factor of %d with recursion are\n",num);
    factor(num);
    printf("\n\n press any key to exit.....");
    return 0;
}
int prime(int num)
{
    int i=2;
    while(num!=1)
    {
        if(num%i==0)
        printf("%d\t",i);
        else
        {
            i++;
            continue;
        }
        num=num/i;
    }
}
int factor (int n)
{
    static int i=2;
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
        else
        i++;
        factor(n);
    }
    return 0;
}