#include <stdio.h>
#include <string.h>
#include <math.h>
#include "convert.h"

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        } else if (binary[i] != '0') {
            return -1; 
        }
    }

    return decimal;
}

void decimal_to_binary(int decimal, char *binary, int size) {
    binary[size - 1] = '\0'; 
    for (int i = size - 2; i >= 0; i--) {
        binary[i] = (decimal % 2) ? '1' : '0';
        decimal /= 2;
    }
}
