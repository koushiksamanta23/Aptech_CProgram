#include<stdio.h>
int fun(int,int);
int main()
{
    int j,k,z;
    printf("\n enter two numbers:\n"); 
    scanf("%d%d",&j,&k);
    z=fun(j,k);
    printf("\n the greatest common divisor of the two numbers is %d\n",z); 
}
int fun(int j,int k)
{
    int r=1,m,n=0,t;
    if(k>j)
    {
        t=j;
        j=k;
        k=t;
    }
    while((j%k)!=0) 
    {
        r=j/k;
        m=j-(r*k);
        if((j%k)==0) 
        {
            /* j is exact multiple of k */
            n=k;
        }
        if(m==0) 
        {
            break;
        }
        j=k;
        k=m;
        n=m;
    }
    return n;
}