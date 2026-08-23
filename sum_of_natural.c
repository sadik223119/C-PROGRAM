#include<stdio.h>

int sum_of_natural(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_of_natural(n - 1);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;  // this is to indicate an error condition
    } else {
        printf("Sum of first %d natural numbers = %d\n", n, sum_of_natural(n));
    }
    return 0;
}