#include<stdio.h>   
#include<math.h>
#include<conio.h>
int binary(int p);
int main()
{
    int a[3],i,n,max,min,maxpos=0,minpos=0;
    printf("enter two many number do you want to enter:\n");
    scanf("%d",&n);
    printf("enter the number:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        { 
            max=a[i];
            maxpos=i;
        }
        printf("the highest number is %d and its position in binary form is %d\n",max,binary(maxpos));
    }
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            minpos=i;
        }
        printf("the lowest number is %d and its position in binary form is %d\n",min,binary(minpos));
    }
    return 0;
}
int binary(int p)
{
    int b,j,n,r;
    if(p==0)
    {
       b=0;
    }
    j=0;
    b=0;
    while(p!=0)
    {
        r=p%2;
        b=b+n*pow(10,j);
        p=p/2;
        j++;
    }
    return(b);
}
