
#include <stdio.h>

int main() {
    int a[5], i, even = 0, odd = 0;

    printf("Name: Sabina Puwanli\n");
    printf("Registration No: 2025-1-53-0341\n");

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}
