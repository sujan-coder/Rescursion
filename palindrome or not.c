//Write a C program to check whether a given string is a palindrome or not using recursion
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }

    if (str[start] != str[end]) {
        return 0;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1)) {
        printf("The given string is a palindrome.\n");
    } else {
        printf("The given string is not a palindrome.\n");
    }

    return 0;
}
