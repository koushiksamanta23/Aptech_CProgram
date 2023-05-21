#include<stdio.h>
int main()
{
    int a,b;
    printf("1.computer science department\n");
    printf("2.business management department\n");
    printf("3.electrical department\n");
    printf("enter your choice\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("available department\n");
            printf("1.school of artifical intelligence\n");
            printf("2.school of data science\n");
            printf("enter your choice\n");
            scanf("%d",&b);
            //inner switch to display the departments
            //under the school of commerce
            switch(b)
            {
                case 1:
                    //code to be executed if b=1;
                    printf("you chose school of artifical intelligence\n");
                    break;
                case 2:
                    //code to be executed if b=2;
                    printf("you chose school of data science");
                    break;
                default:
                    //code to be executed if b is not 1 or 2;
                    printf("invalid choice\n");
                    break;
            }
            break;
        case 2:
            printf("welcome to business management department");
            break;
        case 3:
            printf("welcome to electrical department");
            break;
    }
    return 0;
}
