#include <stdio.h>

enum arithmetic_operations {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    AND = '&',
    OR = '|',
    NOT = '!'
};

int main() {
    float operand1, operand2, result;
    char operation;

    printf("Enter operand1: ");
    scanf("%f", &operand1);

    printf("Enter operand2: ");
    scanf("%f", &operand2);

    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &operation);

    switch (operation) {
        case ADD:
            result = operand1 + operand2;
            printf("%.2f + %.2f = %.2f\n", operand1, operand2, result);
            break;

        case SUBTRACT:
            result = operand1 - operand2;
            printf("%.2f - %.2f = %.2f\n", operand1, operand2, result);
            break;

        case MULTIPLY:
            result = operand1 * operand2;
            printf("%.2f * %.2f = %.2f\n", operand1, operand2, result);
            break;

        case DIVIDE:
            result = operand1 / operand2;
            printf("%.2f / %.2f = %.2f\n", operand1, operand2, result);
            break;

        case AND:
            result = (int)operand1 & (int)operand2;
            printf("(int)%.2f & (int)%.2f = %d\n", operand1, operand2, (int)result);
            break;

        case OR:
            result = (int)operand1 | (int)operand2;
            printf("(int)%.2f | (int)%.2f = %d\n", operand1, operand2, (int)result);
            break;

        case NOT:
            result = !(int)operand1;
            printf("!(int)%.2f = %.2f\n", operand1, result);
            break;

        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}
