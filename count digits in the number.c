// Write a program in C to count the digits of a given number using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the digits:\n");
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
}
void fun(int n)
{
    int count;
    if(n==1)
        return ;
    else
    {
      
      return count++;
      fun(n-1);
    }
}
