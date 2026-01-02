#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        printf("%d ", i);
    }
    return 0;
}
