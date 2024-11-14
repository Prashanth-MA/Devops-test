#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! and 1! are both 1
    }
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial and display result
        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;
}

