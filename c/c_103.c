#include<stdio.h>
int main()
{
    int j,k,t,r,z;
    printf("\n enter two number :\n");
    scanf("%d,%d",&j,&k);
    z=fun(j,k);
    printf("\n the greatest common divisor of the number is %d\n",z);
    getch();
}
 fun(int j,int k)
{
    int r=1,m,n=0,t;
    if(k>j)
    {
        t=j;
        j=k;
        k=t;
    }
    else
    {
        if(j==k)
        return j;
    }
    while((j%k)==0)
    {
        r=j/k;
        m=j-(r*k);
        if(!(j%k)==0)
        n=k;
        break;
        j=k;
        k=m;
        n=m;
    }
    return k;
}