#include <stdio.h>

int main() {
    // Step 1 & 2: Initialize counts
    // 0 = Car, 1 = Bike, 2 = Truck, 3 = Bus (example types)
    int counts[4] = {10, 10, 10, 10};
    int n, type;

    printf("Enter number of vehicle entries: ");
    scanf("%d", &n);

    printf("Vehicle type mapping: 0=Car, 1=Bike, 2=Truck, 3=Bus\n");

    // Step 3–6: Read entries and update
    for (int i = 0; i < n; i++) {
        printf("Enter vehicle type for entry %d: ", i+1);
        scanf("%d", &type);

        if (type >= 0 && type < 4) {
            counts[type]++; // Step 5: increment
        } else {
            printf("Invalid vehicle type!\n");
        }
    }

    // Step 7: display results
    char *names[] = {"Car", "Bike", "Truck", "Bus"};
    int total = 0;

    printf("\nVehicle counts:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %d\n", names[i], counts[i]);
        total += counts[i];
    }

    // Step 8: total
    printf("Total vehicles: %d\n", total);

    return 0;
}
