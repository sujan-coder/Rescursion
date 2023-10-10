//Write a program in C to print even or odd numbers in a given range using recursion.
#include <stdio.h>
#include <stdlib.h>

void printEvenOdd(int a, int b, int parity);

int main() {
    int a, b;
    printf("Enter the range: \n");
    scanf("%d %d", &a, &b);
    printf("Even numbers in the range: ");
    printEvenOdd(a, b, 0);
    printf("\nOdd numbers in the range: ");
    printEvenOdd(a, b, 1);

    return 0;
}

void printEvenOdd(int a, int b, int parity) {
    if (a > b) {
        return;
    }

    if ((a % 2) == parity) {
        printf("%d ", a);
    }

    printEvenOdd(a + 1, b, parity);
}
