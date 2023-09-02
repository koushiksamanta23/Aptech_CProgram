#include<stdio.h>
int main()
{
    int N,c;
    printf("enter a number:\n");
    scanf("%d",&N); 
    int dup=N,d=0;
    int max=dup%10;
    int min=dup%10;
    while(dup!=0)
    {
        d=dup%10;
        if(d>max)
        max=d;
        if(d>min)
        min=d;
        dup=dup/10;     
    }
    printf("%d is the largest digit present in number:\n",max);
    printf("%d is the smallest digit present in number:\n",min);
    return 0; 
}