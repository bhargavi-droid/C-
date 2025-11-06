#include <stdio.h>
// Function to swap two numbers using call by value
void swap_by_value(int a, int b) {
    int temp;
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
    // Display the swapped values
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}
// Function to swap two numbers using call by reference (pointers)
void swap_by_reference(int *a, int *b) {
    int temp;
    temp = *a; // Store the value pointed by a in temp
    *a = *b;    // Assign the value pointed by b to the location pointed by a
    *b = temp;  // Assign the value of temp (original *a) to the location pointed by b
    // Display the swapped values
    printf("Inside swap_by_reference: *a = %d, *b = %d\n", *a, *b);
}
int main() {
    int x, y;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    // Display original values
    printf("Original values: x = %d, y = %d\n", x, y);
    // Swap using call by value
    swap_by_value(x, y);
    printf("After swap_by_value: x = %d, y = %d (no change in original)\n", x, y);
    // Swap using call by reference
    swap_by_reference(&x, &y);
    printf("After swap_by_reference: x = %d, y = %d (original values swapped)\n", x, y);
    return 0;
}
