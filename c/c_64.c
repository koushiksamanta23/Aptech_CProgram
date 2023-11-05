#include<stdio.h>
/*********************************************/
/*    illustration of pointer to function   */
/*******************************************/
#include <math.h> 
#define PI 3.1415926 
double table(double(*f)(double), double min, double max, double step); 
double y(double x); 
int main()
{
    //double y(), cos(), table(); 
    printf("table of y(x) = 2*x*x-x+1\n\n");
    table(y,0.0, 2.0,0.5);
    printf("\n table of cos(x)\n\n");
    table(cos,0.0,PI,0.5);
    return 0; 
}
double table(double(*f)(double), double min, double max, double step) 
{
   double a, value;
   for(a =min; a<=max;a+=step)
   {
    value = (*f)(a);
    printf("%5.2f %10.4f\n",a,value); 
   }
}
double y(double x) 
{
    return 2*x*x-x+1;
}