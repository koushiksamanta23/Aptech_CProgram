#include<stdio.h>
/*****************************************************/
/*        comparsion of structure variable          */
/***************************************************/
struct class
{
    int number;
    char name[20];
    float marks;
};
int main()
{
    int x;
    static struct class  student = {111,"rao",72.50};
    static struct class  student2 = {222,"reddy",67.00};
    static struct class  student3;
    student3 = student2;
    x = ((student3.number == student2.number)&&
         (student3.marks == student2.marks)) ?1:0;
    if(x == 1)
    {
        printf("\nstudent2 and student3 are same\n\n");
        printf("%d %s %f\n",student3.number,
                            student3.name,
                            student3.marks);
    }
    else
    printf("\nstudent2 and student3 are different\n\n");
    return 0;
}