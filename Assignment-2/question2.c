
#include <stdio.h>
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Name: Sabina Puwanli\n");
    printf("Registration Number: 2025-1-53-0341\n");
    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &n);
    if (n < 0 || n > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, factorial(n));
    }
    return 0;
}
