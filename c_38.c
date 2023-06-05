#include<stdio.h>
int main()
{
    // 0 1 1 2 3 5 8 ....n
    int n,a=0,b=1,c,i;
    printf("enter number of term....\n");
    scanf("%d",&n);
    for(i=1;i<=n;i+1)
    {
        printf("%d",&a);
        c=a+b;
        a=b;
        b=c;
    }    
    return 0;
}
