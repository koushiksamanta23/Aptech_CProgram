#include<stdio.h>
/****************************************************/
/*     PROGRAM TO CALCULATE A SALEMANS SALARY      */
/**************************************************/
#define    BASE_SALARY         1500.00
#define    BONUS_RATE           200.00
#define    COMMISSION             0.02
int main()
{
    int quantity;
    float gross_salary ,price;
    float bonus , commission;
    printf("input number sold and price\n");
    scanf("%d %f",&quantity,&price);
    bonus        = BONUS_RATE * quantity;
    commission   = COMMISSION * quantity * price;
    gross_salary = BASE_SALARY + bonus + commission;
    printf("\n");
    printf("Bonus        = %6.2f\n",bonus);
    printf("commission   = %6.2f\n",commission);
    printf("gross salary = %6.2f\n",gross_salary);
    return 0;
}