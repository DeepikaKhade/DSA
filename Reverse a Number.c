#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10; // Add the last digit to the reversed number
        num /= 10; // Remove the last digit from the number
    }
    return reversedNum;
}

int main() {
    int number, reversedNumber;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    reversedNumber = reverseNumber(number);

    // Display the result
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

