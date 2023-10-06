//Write a program in C to check if a number is a prime number or not using recursion.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int i=n/2;
    if(fun(n,i)==1)
    printf("Prime number");
    else
        printf("Not a prime");
    return 0;
}
int fun(int n,int i)
{

        if(n<=1)
           return 0;


        if(i==1)
            return 1;

        if(n%i==0)
            return 0;

        else
            fun(n,i-1);

}
