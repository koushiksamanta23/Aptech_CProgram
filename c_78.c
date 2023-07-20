
#include<stdio.h>
/**********************************************/
/*             array of structure            */
/********************************************/
struct marks
{
    int sub[3]; 
    int total; 
};
int main()
{
    static struct marks student[3] = {{45,67,81,0},
                                      {75,53,69,0},
                                      {57,36,71,0} };
    static struct marks total = {0,0,0,0};
    int i;
    
    for(i=0;i<=2;i++)
    {
        student[i].total = student[i].sub[0] + student[i].sub[1] + student[i].sub[2]; 
        total.sub[0] += student[i].sub[0]; 
        total.sub[1] += student[i].sub[1]; 
        total.sub[2] += student[i].sub[2]; 
        total.total += student[i].total;
    }
    for(i=0;i<=2;i++)
    printf("student[%d]           %d\n",i+1,student[i].total);
    
    printf("\nsubject              total\n\n");
    printf("subject 1         %d\n",total.sub[0]);
    printf("subject 2         %d\n",total.sub[1]);
    printf("subject 3         %d\n",total.sub[2]);
    
    printf("\ngrand = %d\n",total.total);
}