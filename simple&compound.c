#include <stdio.h>
#include <math.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

// Function to calculate compound interest
float calculateCompoundInterest(float principal, float rate, float time) {
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = calculateSimpleInterest(principal, rate, time);
    printf("Simple Interest: %.2f\n", simpleInterest);

    // Calculate compound interest
    compoundInterest = calculateCompoundInterest(principal, rate, time);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
