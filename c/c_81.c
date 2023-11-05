#include<stdio.h>
/*********************************************/
/*program to convert days to months and days*/
/*******************************************/
int main()
{
    int months,days;
    printf("enter days\n");
    scanf("%d",&days);
    months = days / 30;
    days = days % 30; 
    printf("months = %d days = %d",months,days);
    return 0;
}