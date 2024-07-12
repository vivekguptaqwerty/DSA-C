#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d (recursive) = %llu\n", num, factorial_recursive(num));
    }

    return 0;
}
