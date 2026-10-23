
#include <stdio.h>
long long power(int n) {
    if (n == 0) {
        return 1;
    }
    return 2 * power(n - 1);
}
int main() {
    int n;
    printf("Name: Sabina Puwanli\n");
printf("Registration Number: 2025-1-53-0341\n");
    printf("Enter the power (0-62): ");
    scanf("%d", &n);
    if (n < 0 || n > 62) {
        printf("Please enter a power between 0 and 62.\n");
    } else {
        printf("2^%d = %lld\n", n, power(n));
    }
    return 0;
}
