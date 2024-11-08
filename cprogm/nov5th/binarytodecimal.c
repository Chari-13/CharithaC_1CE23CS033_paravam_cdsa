#include <stdio.h>
#include <math.h>

int main() {
    char binary[32];
    int i, length,decimal=0;
    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (length = 0; binary[length] != '\0'; length++);
    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
