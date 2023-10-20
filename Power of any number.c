//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,p,res;
printf("enter the  number:");
scanf("%d",&n);
printf("power:");
scanf("%d",&p);
res=power(n,p);

printf("%d to the power of %d is %d\n", n, p, res);
}
int power(int n,int p)
{
if(p==0)
    return 1;

else if(p>0)
return n*power(n,p-1);

else if(p<0)
    return 1.0/(n*power(n,-p-1));


}
