#include<stdio.h>
int main()
{
    int area,h,w;
    printf("enter height of rectangle\n");
    scanf("%d",&h);
    printf("enter width of rectangle\n");
    scanf("%d",&w);
    area=h*w;
    printf("area of the rectangle=%d\n",area);
    return 0;
}