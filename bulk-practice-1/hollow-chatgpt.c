#include <stdio.h>

void printHollowPyramid(int n) {
    int i, j, space;

    // Loop for each row
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars and spaces inside the pyramid
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after printing each row
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the hollow pyramid: ");
    scanf("%d", &n);

    printHollowPyramid(n);

    return 0;
}

