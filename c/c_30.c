#include<stdio.h>
int main()
{
 int q,p,r,s; 
 printf("enter the line number:\n");
 scanf("%d",&p); 
 for(p=p;p>1;p--)
 {
  printf(" ");
  for(r=0;r<=p*4;r++)
   printf(" "); 
  for(q=p;q<=2*p-1;q++)
   printf("%4d",q);
  for(s=2*p-2;s>=p;s--) 
   printf("%4d",s);
  printf("\n");
 }
 printf(" %d\n",p);
 return 0;
}