#include<stdio.h>
#include<float.h>
int main()
{
    printf("storage size for float : %zu\n",sizeof(float));
    printf("minimum float positive value: %e\n",FLT_MIN);
    printf("maximum float positive value : %e\n",FLT_MAX);
    printf("precision value: %d\n",FLT_DIG);
    return 0;
}
