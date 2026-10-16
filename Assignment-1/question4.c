
#include <stdio.h>

int main() {
    int a[5], i, smallest;

    printf("Name: Sabina Puwanli\n");
    printf("Registration No: 2025-1-53-0341\n");

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    smallest = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
