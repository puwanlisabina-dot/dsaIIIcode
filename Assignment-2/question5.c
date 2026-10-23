
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n, i;
    printf("Name: Sabina Puwanli\n");
printf("Registration Number: 2025-1-53-0341\n");
    printf("Enter the number of terms (1-40): ");
    scanf("%d", &n);
    if (n < 1 || n > 40) {
        printf("Please enter a number between 1 and 40.\n");
    } else {
        printf("Fibonacci series: ");
        for (i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}
