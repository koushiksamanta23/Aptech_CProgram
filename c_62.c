#include<stdio.h>
/*********************************************/
/*      pointer and character string        */
/*******************************************/
int main()
{
    char *name;
    int length;
    char *cptr = name;
    name = "DELHI";
    while(*cptr !='\0')
    {
        printf("%c is stored at address %u\n",*cptr,cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\n length of the string = %d\n",length);
    return 0;
}