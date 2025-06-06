#include <stdio.h>
int main()
{
    float operand1 = 0, operand2 = 0, result = 0;
    char operator= '\0';
    printf("Enter the operation you want to perform\n");
    scanf(" %c", &operator);

    printf("Enter operand 1:\n");
    scanf(" %f", &operand1);
    printf("Enter operand 2:\n");
    scanf(" %f", &operand2);

    switch (operator)
    {

    case '+':
        result = operand1 + operand2;
        printf("The result of %c on %.2f and %.2f is %.2f\n", operator, operand1, operand2, result);
        break;
    case '-':
        result = operand1 - operand2;
        printf("The result of %c on %.2f and %.2f is %.2f\n", operator, operand1, operand2, result);
        break;
    case '*':
        result = operand1 * operand2;
        printf("The result of %c on %.2f and %.2f is %.2f\n", operator, operand1, operand2, result);
        break;
    case '/':
        if (operand2 == 0)
            printf("Cannot divide by zero");
        else
        {
            result = operand1 / operand2;
            printf("The result of %c on %.2f and %.2f is %.2f\n", operator, operand1, operand2, result);
        }
        break;
    default:
        printf("Invalid operator entered.\n");
        break;
    }

    return 0;
}