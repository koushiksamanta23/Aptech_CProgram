#include<stdio.h>
int main()
{
    int ch;
    FILE *ptr;
    ptr = fopen("D:/cprog/first.txt","r");
    if (ptr == NULL) // check if the file is opened successfully
    {
        printf("Error: cannot open the file.\n");
        exit(1); // exit the program with an error code
    }
    while((ch == fgetc(ptr))!=EOF)
    {
        printf("%c",ch);
    }
    return 0;
}
