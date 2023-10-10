//Write a program in C to find the LCM of two numbers using recursion


#include <stdio.h>
#include <stdlib.h>

// Function prototype
int findLCM(int a, int b);

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    int lcm = findLCM(a, b);

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}

// Recursive function to find the LCM
int findLCM(int a, int b) {
    static int lcm = 1; // To keep track of the LCM

    if (lcm % a == 0 && lcm % b == 0) {
        return lcm; // LCM is found
    }

    lcm++;

    return findLCM(a, b); // Recursively search for LCM
}


