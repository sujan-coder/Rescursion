// Write a program in C to find the Factorial of a number using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
}
int fun(int n)
{
    if(n>=1)
        return n*fun(n-1);
    else
        return 1;
}
