//Write a program in C to convert a decimal number to binary using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the decimal number:\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}
int fun(int n)
{
    if(n>0){
        fun(n/2);
        printf("%d",n%2);
}
}
