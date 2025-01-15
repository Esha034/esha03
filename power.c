#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    // Take base and exponent as input from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate the power
    result = pow(base, exponent);

    // Display the result
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}
