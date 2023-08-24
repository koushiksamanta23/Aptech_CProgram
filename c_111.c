#include<stdio.h>
int main()
{
    int i=65,j;
    printf("\nvalue od i=%d",i);
    j=i&32;
    if(j==0)
    printf("\nand its fifth bit is off");
    else
    printf("\nand is fifth bit is on");
    j=i&64;
    if(j==0)
    printf("\nwhereas its sixth bit is off");
    else
    printf("\nwhereas its sixth bit is on");
    return 0;
}