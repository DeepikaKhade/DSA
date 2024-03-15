#include <stdio.h>

void generateFibonacci(int limit) {
    int a = 0, b = 1, nextTerm = 0;

    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d, %d, ", a, b);
    nextTerm = a + b;

    while (nextTerm <= limit) {
        printf("%d, ", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
}

int main() {
    int limit;

    printf("Enter the limit for Fibonacci Series: ");
    scanf("%d", &limit);

    generateFibonacci(limit);

    return 0;
}

