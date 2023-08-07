#include <stdio.h>

int main() {
    int rows, space, num = 1;

    // Input the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Loop for printing spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Loop for printing numbers on each side of the pyramid
        for (int j = 1; j <= i; j++) {
            printf("%2d  ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}

