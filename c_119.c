#include<stdio.h>
int main()
{
    int N,c;
    printf("enter a number\n");
    scanf("%d",&N);
    c=N%10;
    if((c==7)||(c%7==0))
    {
        printf("%d IS A BUZZ NUMBER\n",N);
    }
    else
    {
        printf("%d IS NOT A BUZZ NUMBER\n",N);
    }
    return 0;
}