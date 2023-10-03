#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main() {
    int n;
    printf("Enter the number of Fibonacci series terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    
    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
