#include<stdio.h>
int main()
{
 char ch;
 printf("enter any character\n");
 scanf("%c",&ch);
 if(ch>=65&&ch<=97||ch>=97&&ch<=122)
 {
    printf("it is alphabet");
 } 
 else if(ch>=48&&ch<=57)
 {
    printf("it is digit");
 }
 else
 {
    printf("it is special symbol");
 }
}