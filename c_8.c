#include <stdio.h>
int main()
{
	int n,m;
	printf("enter the mark of ther student:\n");
	scanf("%d",&n);n
	m = n/10;
	switch(m)
	{
	case 9: printf("grade:o,outstanding");
	break;
	case 8: printf("grade:e,excellent");
	break;
	case 7: printf("grade:a,very good");
	break;
	case 6: printf("grade:b,good");
	break;
	case 5: printf("grade:c,statisfactory");
	break;
	case 4: printf("grade:d,standard");
	break;
	default: printf("fail");
	break;	
	}
	return 0;
}
