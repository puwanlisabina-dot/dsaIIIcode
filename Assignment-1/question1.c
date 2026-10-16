#include <stdio.h>

int main()
{
    int a[5], i;

    printf("Name: Sabina Puwanli\n");
    printf("Registration No: 2025-1-53-0341\n");

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}