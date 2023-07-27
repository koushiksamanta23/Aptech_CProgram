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
    printf("Size of Book:%d\n",sizeof(book));
    printf("Size of record:%d\n",sizeof(struct record));
    no_of_records = sizeof(book)/sizeof(struct record);
    
    printf("Size of Book:%d\n",no_of_records);
    do
    {
        printf("enter title and author name as per the list\n");
        printf("\n title :     ");
        get(title);//inserting title name from input to parameter title declared above
        printf("author:  ");
        get(author);//inserting author name from input to parameter author declared above
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
            get(quantity);//inserting quantity from input to parameter quantity declared above

            //atoi : For example, if the string is “123”, the function returns 123 as an int. If the string is “-456”, the function returns -456 as an int. If the string is “abc”, the function returns 0 as an int. If the string is “2147483648”, the function may return an undefined value as an int, since it exceeds the range of int on most systems.
            int qty = atoi(quantity);
            if(qty<book[index].quantity)
            printf("cost of %d copies = %.2f\n",qty,
                   book[index].price * qty);
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
    //s1 contains title input
    //s2 contains author input
    int i;
    for(i=0;i<m;i++)
    {
        //strcmp is used for comparing 2 string at acii level i.e. A != a but a == a
        if(strcmp(s1,table[i].title) == 0 && strcmp(s2,table[i].author)== 0) 
        {
            //if s1 and table[i].title matches and s2 and table[i].author matches then returning the index stored in i
            return(i); 
        }
        else
        {
            return(-1); 
        }
    }
}