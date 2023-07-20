#include<stdio.h>
/*********************************************/
/*      pointer as function parameters      */
/*******************************************/
void exchange(int *a, int *b); 
int main()
{
   int x,y;
   x=100;
   y=200;
   printf("before exchange: x = %d y = %d\n\n",x,y);
   exchange(&x,&y);
   printf("after exchange: x = %d y = %d\n\n",x,y);
   return 0; 
}
void exchange(int *a, int *b) 
{
    int t;
    t = *a; /*assign the value at address a to t */
    *a = *b; /*put the value at b into a */
    *b = t; /* put t into b */
}
