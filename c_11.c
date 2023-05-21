#include<stdio.h> 
int main()
{ 
   int a=10;
   while(a<20)
   { printf("value of ac %d\n",a);
   a++;
   if(a>15)
     {
   	  /*herminate the loop using break statement*/
   	    break;
     }
   }
    return 0;
}

