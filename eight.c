#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is max\n", a);
    else if (b > c)
        printf("%d is max\n", b);
    else
        printf("%d is max\n", c);
    return 0;
}
