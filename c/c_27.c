#include<stdio.h>
int main()
{
    char x[]="study with care";
    printf("5s\n",x);
    printf("%16s\n",x);
    printf("%16.7s\n",x);
    printf("%.8s\n",x);
    printf("%-16.7s\n",x);
    return 0;
}