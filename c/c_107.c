#include<stdio.h>
#define AREA(X) (PI*(X)*(X)) // macro definition for area of circle
const float PI = 3.14; // constant variable for pi
int main()
{
    float radius1 = 6.25, radius2 = 2.5, area; // declare variables with meaningful names
    area = AREA(radius1); // calculate area of first circle
    printf("\nAREA of circle = %f",area); // print the result
    area = AREA(radius2); // calculate area of second circle
    printf("\nAREA of circle = %f",area); // print the result
    return 0;
}