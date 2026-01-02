#include <stdio.h>

int main() {
    int arr[2][2], sum = 0;
    printf("Enter 4 numbers: ");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            sum += arr[i][j];

    printf("Sum = %d\n", sum);
    return 0;
}
