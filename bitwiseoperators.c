#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    // Bitwise AND
    printf("Bitwise AND (a & b): %d\n", a & b);
    // Bitwise OR
    printf("Bitwise OR (a | b): %d\n", a | b);
    // Bitwise XOR
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);
    // Bitwise NOT
    printf("Bitwise NOT (~a): %d\n", ~a);
    printf("Bitwise NOT (~b): %d\n", ~b);
    // Left Shift
    printf("Left Shift (a << 1): %d\n", a << 1);
    printf("Left Shift (b << 1): %d\n", b << 1);
    // Right Shift
    printf("Right Shift (a >> 1): %d\n", a >> 1);
    printf("Right Shift (b >> 1): %d\n", b >> 1);
    return 0;
}
