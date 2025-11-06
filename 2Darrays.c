#include <stdio.h>

int main() {
    int i,j;
    int rows = 3;
    int cols = 4;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and printing elements of the 2D array
    printf("The elements of the 2D array are:\n");
    for(i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // New line after each row
    }

    // Accessing a specific element
    int specificRow = 1; // 2nd row (index starts from 0)
    int specificCol = 2; // 3rd column (index starts from 0)
    printf("Element at row %d, column %d is: %d\n", specificRow, specificCol, array[specificRow][specificCol]);

    return 0;
}
