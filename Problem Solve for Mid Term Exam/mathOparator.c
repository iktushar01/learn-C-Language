// Write a program that performs different mathematical operations based on user input.
// The user enters two numbers and a character representing the operation:
// ○ '+' for addition
// ○ '-' for subtraction
// ○ '*' for multiplication
// ○ '/' for division (handle division by zero separately)
// ○ '^' for exponentiation (e.g., 2^3 = 8)
// ○ '%' for modulus (only for integers)

// Implement a switch-case to perform the appropriate operation and display the result.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    char oparetor;

    // Input
    printf("Enter 1st Number:\n");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, ^, %%):\n");
    scanf(" %c", &oparetor);  // space before %c to consume leftover newline

    printf("Enter 2nd Number:\n");
    scanf("%d", &b);

    // Operation
    switch (oparetor)
    {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %.2f\n", (float)a / b);  // cast to float for decimal output
            break;

        case '%':
            if (b == 0)
                printf("Error: Modulo by zero is not allowed.\n");
            else
                printf("Result: %d\n", a % b);
            break;

        case '^':
            printf("Result: %.2f\n", pow(a, b));  // Exponentiation with 2 decimal places
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
