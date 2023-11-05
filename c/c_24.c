#include<stdio.h>
int main() 
{
    float p,c,m,h,e,avg;
    printf("enter marks in physics\n");
    scanf("%f",&p);
    printf("enter marks in chemistry\n");
    scanf("%f",&c);
    printf("enter marks in math\n");
    scanf("%f",&m); 
    printf("enter marks in hindi\n");
    scanf("%f",&h);
    printf("enter marks in english\n"); 
    scanf("%f",&e);
    avg=(p+c+m+h+e)/5; 
    printf("average of result=%f\n",avg); 
    return 0;
}
