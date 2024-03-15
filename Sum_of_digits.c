#include <stdio.h>

int main() {
    int num, digit1, digit2;

    // Input number from the user
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    // Extract the digits
    digit1 = num / 10;    // Extract the tens digit
    digit2 = num % 10;    // Extract the ones digit

    // Calculate the sum of the digits
    int sum = digit1 + digit2;

    // Display the result
    printf("Sum of digits of %d is %d.\n", num, sum);

    return 0;
}
