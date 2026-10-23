
#include <stdio.h>
#define MAX 100
int main() {
    char str[MAX], stack[MAX];
    int i = 0, top = -1;
    printf("Name: Sabina Puwanli\n");
printf("Registration Number: 2025-1-53-0341\n");
    printf("Enter a string: ");
    scanf(" %99[^\n]", str);
    while (str[i] != '\0') {
        top++;
        stack[top] = str[i];
        i++;
    }
    printf("Reversed string: ");
    while (top >= 0) {
        printf("%c", stack[top]);
        top--;
    }
    printf("\n");
    return 0;
}
