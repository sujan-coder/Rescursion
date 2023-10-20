//Write a C program to find the Hailstone Sequence of a given number up to 1.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    hail(n);
}
int hail(int n)
{
    printf("%d ",n);

    if(n==1)
        return;
    else if(n%2==0)
     hail(n/2);

     else //if(n%2!=0)
     hail(3*n+1);

}
