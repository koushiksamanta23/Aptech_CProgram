#include<stdio.h>
void showbits(int n); // prototype
int main()
{
    showbits(5); // pass an argument
    return 0;
};
void showbits(int n)
{
    int i,k,andmask;
    for(i=15;i>=0;i--) // change the condition
    {
        andmask = 1<<i;
        k=n & andmask;
        k==0?printf("0"):printf("1"); // use double quotes
    }
    printf("\n"); // add a newline
}