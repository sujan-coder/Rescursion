//Write a program in C to find the sum of digits of a number using recursion.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    printf("sum=%d",fun(n));
    return 0;
}
int fun(int n)
{
    if(n==0)
        return 0;
    else
    {
        return n+fun(n/10);
    }
}
