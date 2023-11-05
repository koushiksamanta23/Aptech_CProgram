#include<stdio.h>
/*****************************************************/
/*          program for frequency counting          */
/***************************************************/
#define maxval 50 
#define counter 11 
int main()
{
    float value[maxval];
    int i,low,high;
    static int groups[counter]={0,0,0,0,0,0,0,0,0,0,0};
    /*............reading and counting..............*/
    for(i=0;i<maxval;i++)
    {
        /*...reading of value...*/
        scanf("%f",&value[i]);
        /*...counting frequency of groups...*/
        ++ groups[(int)(value[i]+0.5)/10];
    }
    /*...............printing of frequency table.............*/
    printf("\n");
    printf("group range frequency\n\n");
    for(i=0;i<counter;i++)
    {
        low=i*10;
        if(i==10)
        high=100;
        else
        high=low + 9;
        printf(" %2d %3d to %3d  %d\n",i+1,low,high,groups[i]);
    }
    return 0;
}
