#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }

    printf("Sorted: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
