#include <stdio.h>

int main() {
    int arr[5], key, found = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
        }

    if (!found) printf("Not found\n");
    return 0;
}
