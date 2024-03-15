#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator and operands from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if dividing by zero
            if (num2 == 0) {
                printf("Error! Cannot divide by zero.\n");
                return 1; // Exit the program with an error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit the program with an error code
    }

    // Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}
