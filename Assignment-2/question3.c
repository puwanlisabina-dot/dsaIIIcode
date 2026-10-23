
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    int a, b, result;
printf("Name: Sabina Puwanli\n");
printf("Registration Number: 2025-1-53-0341\n");
    printf("Enter two non-negative integers: ");
    scanf("%d %d", &a, &b);
    if (a < 0 || b < 0 || (a == 0 && b == 0)) {
        printf("Please enter valid non-negative integers.\n");
    } else {
        result = gcd(a, b);
        printf("GCD of %d and %d = %d\n", a, b, result);
    }
    return 0;
}
