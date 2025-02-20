#include <stdio.h>
#include "convert.h"

#define MAX_BINARY_SIZE 33  // 32-bit 

int main() {
    char binary[MAX_BINARY_SIZE];
    int decimal;
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert binary to decimal\n");
    printf("2. Convert decimal to binary\n");
    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);
        int result = binary_to_decimal(binary);
        if (result == -1) {
            printf("Invalid binary number!\n");
        } else {
            printf("Decimal equivalent: %d\n", result);
        }
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimal_to_binary(decimal, binary, MAX_BINARY_SIZE);
        printf("Binary equivalent: %s\n", binary);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
