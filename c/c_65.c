#include<stdio.h>
/*********************************************/
/*       pointer to structure variable      */
/*******************************************/
struct invent { char name[20]; int number; float price; };
int main()
{
   char name[20];
   int number;
   float price;
   
    struct invent product[3],*ptr;
    printf("input\n\n");
    for(ptr=product;ptr<product+3;ptr++)
    scanf("%s%d%f",ptr->name,&ptr->number,&ptr->price);
    printf("\n output\n\n");
    ptr=product;
    while(ptr<product+3)
    {
        printf("%s %5d %10.2f\n",
        ptr->name,ptr->number,ptr->price);
        ptr++;
    }
    return 0;
}
