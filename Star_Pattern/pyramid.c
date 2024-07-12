#include <stdio.h>

void printPyramid(int n) {
    int i, j, space;

    // Loop for each row
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("i%d j%d",i,j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    printPyramid(n);

    return 0;
}
