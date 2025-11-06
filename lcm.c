#include <stdio.h>
// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to calculate LCM
int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}
int main() {
    int num1, num2;
    // Input two numbers
    printf("Enter two integers:");
    scanf("%d %d", &num1, &num2);
    // Calculate LCM
    int result = lcm(num1, num2);
    // Output the result
    printf("LCM of %d and %d is %d\n", num1, num2, result);
    printf("Bhargavi:24B11CS091");
    return 0;
}
