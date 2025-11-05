#include <stdio.h>
int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, temp, sum = 0, digit;

    scanf("%d", &number);

    temp = number; 

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == number) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
