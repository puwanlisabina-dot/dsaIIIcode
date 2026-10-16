
#include <stdio.h>

int main() {
    int a[5], i, sum = 0;

    printf("Name: Sabina Puwanli\n");
    printf("Registration No: 2025-1-53-0341\n");

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
