#include<stdio.h>
/******************************************************/
/* DEFINING AND ASSIGNING VALUE TO STRUCTURE MEMBERS */
/****************************************************/
struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main()
{
    struct personal person;
    printf("%s %d %s %d %f",
                person.name,
                &person.day,
                person.month,
                &person.year,
                &person.salary);
    printf("%s %d %s %d %f\n",
               person.name,
               person.day,
               person.month,
               person.year,
               person.salary);
return 0;
}