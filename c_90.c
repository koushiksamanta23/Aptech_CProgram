/**************************************************/
/*      WRITING A CHARACTER TO THE TERMINAL      */
/************************************************/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    printf("enter an alphabet\n");
    alphabet = getchar();
    if (islower(alphabet))
    {
        putchar(toupper(alphabet));
    }
    else
    {
        putchar(tolower(alphabet));
    }
    return 0;
}