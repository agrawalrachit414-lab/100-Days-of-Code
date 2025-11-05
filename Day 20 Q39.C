#include <stdio.h>

int main() {
    int number, digit;
    int product = 1;
    int hasOddDigit = 0;

    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            hasOddDigit = 1;
        }
        number /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found\n");
    }

    return 0;
}
