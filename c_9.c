#include<stdio.h>
int main()
{
    int num=0;
    printf("enter any number:\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("number is equal 1\n");
            break;
        case 2:
            printf("number is equal 2\n");
            break;
        case 3:
            printf("number is equal 3\n");
            break;
        default:
            printf("number is not equal to 1,2 or 3\n");
    }
    return 0;
}
