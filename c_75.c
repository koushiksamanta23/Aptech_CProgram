/*********************************************/
/*           book shop inventory            */
/*******************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
struct record
{
    char author[20];
    char title[30];
    float price;
    struct
    {
        char month[10];
        int year;
    }
    date;
    char publisher[10];
    int quantity;
};
int main() 
{
    char title[30],author[20];
    int index,no_of_records,look_up(); 
    char response[10],quantity[10];
    static struct record book[]= {
        {"ritche","c language",45.00,"may",1977,"phi",10},
        {"kochan","programming in c",75.50,"july",1983,"hayden",15}, 
        {"balagurusamy","basic",30.00,"december",1984,"tmh",0},
        {"balagurusamy","cobol",60.00,"december",1988,"macmillan",25}
    };
    no_of_records = sizeof(book)/sizeof(struct record);
    do
    {
        printf("enter title and author name as per the list\n");
        printf("\n title :     ");
        get(title);
        printf("author:  ");
        get(author);
        index = look_up(book,title,author,no_of_records);
        if(index!=-1)   /*book found*/
        {
            printf("\n%s %s %.2f %s %d %s\n\n",
                      book[index].author,
                      book[index].title,
                      book[index].price,
                      book[index].date.month,
                      book[index].date.year,
                      book[index].publisher);
            printf("enter number of copies:");
            get(quantity);
            if(atoi(quantity)<book[index].quantity)
            printf("cost of %d copies = %.2f\n",atoi(quantity),
                   book[index].price * atoi(quantity));
            else
            printf("\n required copies not in stock\n\n");                 
        }
        else
        printf("\nbook not in list\n\n");
        printf("\ndo you want any other book?(yes/no):");
        get(response);
    }
    while(response[0]=='y'|| response[0]=='y');
    printf("\n\nthank you.good bye !\n");
}
get(char string[]) 
{
    char c;
    int i=0;
    do
    {
        c=getchar();
        string[i++]=c;
    }
    while(c!='\n');
    string[i-1]='\0';
}
int look_up(struct record table[],char s1[],char s2[],int m) 
{
    int i;
    for(i=0;i<m;i++)
    if(strcmp(s1,table[i].title)== 0 &&
    strcmp(s2,table[i].author)== 0)
    return(i); 
    return(-1); 
}