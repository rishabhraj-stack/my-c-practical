#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("%.2lf\n", a + b); break;
        case '-': printf("%.2lf\n", a - b); break;
        case '*': printf("%.2lf\n", a * b); break;
        case '/':
            if (b != 0) printf("%.2lf\n", a / b);
            else printf("Error: division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
