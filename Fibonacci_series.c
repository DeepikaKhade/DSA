#include <stdio.h>

void readFromFile(const char* filename)
 {
    FILE* file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file: %s\n", filename);
        return;
    }

    char buffer[100]; // Assuming maximum line length is 100 characters
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
  printf("\n results are in written to %s\n",filename);
    }

    fclose(file);
}

void writeToFile(const char* filename, const char* content)
{
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return;
    }

    fprintf(file, "%s\n", content);

    fclose(file);
}

int main() {
    const char message[] = "HELLO WORLD"; // Use const char* for string literals
    writeToFile("output.txt", message);

    readFromFile("output.txt");

    return 0;
}
 


2.Factorial

ccc


3.Prime numbers

#include<stdio.h>

// Function prototypes
int prime(int);
void readfromfile(char* filename, int *n);
void writetofile(char* filename, char *result);

int main() {
    int n;

    // Read an integer from the input file
    readfromfile("input.txt", &n);

    // Check if the number is prime
    prime(n);

    return 0;
}

// Function to check if a number is prime
int prime(int n) {
    int i, flag = 1;

    // Loop to check for factors of n
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    // Declare a character array to store result
    char result[50];

    // Write the result to the result string
    if(flag == 1) {
        sprintf(result, "\nThe given number is a prime number");
    } else {
        sprintf(result, "\nThe given number is not a prime number");
    }

    // Write the result to the output file
    writetofile("output.txt", result);
}

// Function to read an integer from a file
void readfromfile(char* filename, int *n) {
    FILE *file = fopen(filename, "r");

    // Check if the file opened successfully
    if(file == NULL) {
        printf("Error opening input file");
        return;
    }

    // Read an integer from the file
    fscanf(file, "%d", n);

    // Close the file
    fclose(file);
}

// Function to write a string to a file
void writetofile(char* filename, char *result) {
    FILE *file = fopen(filename, "w");

    // Check if the file opened successfully
    if(file == NULL) {
        printf("Error opening output file %s", filename);
        return;
    }

    // Write the result to the file
    fprintf(file, "%s\n", result);

    // Close the file
    fclose(file);

    // Print a message indicating successful write
    printf("\nResults are written to %s\n", filename);
}

Output


 



4.Fiboncii Series

#include<stdio.h>
void fiboncii(int);
void readfromfile(char*,int*);
void writetofile(char*,int);
int main()
{
    int n;
    readfromfile("input.txt",&n);
    fiboncii(n);
    return 0;
}
void fiboncii(int n)
{
    int i,a=0,b=1,next_term;
    FILE *file=fopen("output.txt","w");
    if(file==NULL)
    {
        printf("Error opening input file");
        return;
    }
    for(i=0;i<n;i++)
    {
        fprintf(file,"%d ",a);
        next_term=a+b;
        a=b;
        b=next_term;
    }
    fclose(file);
    printf("Fibonacci series for is written to output.txt\n");
}
void readfromfile(char*filename,int *n)
{
    FILE *file=fopen(filename,"r");
    if(file==NULL)
    {
        printf("Error opening input file");
        return;
    }

    fscanf(file,"%d",n);
    fclose(file);
}

void writetofile(char*filename,int result)
{
    FILE *file=fopen(filename,"w");
    if(file==NULL)
    {
        printf("error opening input file %s",filename);
        return;
    }
    fprintf(file,"d\n",result);
    fclose(file);
     printf("\n results are in written to %s\n",filename);

