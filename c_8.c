#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the mark of the student:\n");
    scanf("%d",&n); 
    n=(n-1)/10; 
    switch(n) 
    {
    case 9: printf("Grade: O, Outstanding\n");
    break;
    case 8: printf("Grade: E, Excellent\n");
    break;
    case 7: printf("Grade: A, Very good\n");
    break;
    case 6: printf("Grade: B, Good\n");
    break;
    case 5: printf("Grade: C, Satisfactory\n");
    break;
    case 4: printf("Grade: D, Standard\n");
    break;
    default: printf("Fail\n");
    break;  
    }
    return 0;
}
