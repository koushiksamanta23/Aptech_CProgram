#include<stdio.h>
// function to calculate the factorial of a number
int factorial(int n)
{
    int f = 1;
    while (n > 0)
    {
        f = f * n;
        n--;
    }
    return f;
}

int main()
{
    int num, digit, factorial, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    // store a copy of the original number
    int a = num;
    while (num > 0)
    {
        // get the rightmost digit of num
        digit = num % 10;
        // calculate the factorial of digit and add it to sum
        factorial = factorial(digit);
        sum = sum + factorial;
        // remove the rightmost digit of num
        num = num / 10;
    }
    // check if sum is equal to a or not
    if (sum == a)
    {
        printf("%d is a Krishnamurti number\n", sum);
    }
    else
    {
        printf("%d is not a Krishnamurti number\n", sum);
    }
    return 0;
}
