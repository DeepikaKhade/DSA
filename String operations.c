#include <stdio.h>
#include <string.h>

int main() {
    // Define two strings
    char str1[50] = "Hello";
    char str2[50] = "World";

    // Concatenation: Concatenate str2 at the end of str1
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Copying: Copy str1 to str3
    char str3[50];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // Comparison: Compare str1 and str2
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    return 0;
}

