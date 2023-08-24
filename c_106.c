#include<stdio.h>
#define AND &&
#define ARANGE(num) (num>25 AND num<50)
int main()
{
    int a=30;
    if(ARANGE(a))
    printf("within range");
    else
    printf("out of range");
    return 0;
}