//Write a program in C to copy one string to another using recursion
#include<stdio.h>
#include<stdlib.h>
int main()
{
 char  dst[50],str[50];
 printf("Enter the string:\n");
 scanf(" %s",str);
 cpy(str,dst);
 printf("copied string:%s",dst);
 return 0;
}
int cpy(const char *str,char *dst)
{
    if (*str=='\0')
    {
        *dst=='\0';
        return;
    }
    *dst= *str;
    cpy(str+1,dst+1);
}
