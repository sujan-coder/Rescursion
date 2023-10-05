//Write a program in C to reverse a string using recursion.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    printf("Enter the string:\n");
    scanf("%s",s);
    printf("%s",fun(s));

    return 0;
}
int fun(char *s)
{
    if (*s)
        {
    fun(s+1);
    printf("%c",*s);
        }

}
 
