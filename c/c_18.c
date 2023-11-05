#include <stdio.h>
void main()
{
	float s=0;
	float i=1;
	while(i<100)
	{
        //printf("i = %f => %f\n",i,s);

        float k = i+1;
        printf("i = %f, s => %f\n",i,s);
        printf("i = %f, i+1 => %f\n",i,(i+1));
		s += (i/(i+1));
        i++;
	}
	printf("the sum of the series is %f\n",s);

    //Answer as per book is 95.80274 which is wrong because when we are taking i<=100 then the last fraction is 100/101
    float l = 95.80274-s;
    
	printf("the sum of the series is %f\n",l);
	//return 0;
}