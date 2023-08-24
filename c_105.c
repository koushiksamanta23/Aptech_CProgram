#include<stdio.h>
#define AND &&
#define OR ||
int main()
{
    int f=1,x=4,y=90;
    if((f<5)AND(x<=20 OR y<=45))
    printf("\n you PC will always work fine..");
    else
    printf("\n|n front of the maintetance man");
    return 0;
}