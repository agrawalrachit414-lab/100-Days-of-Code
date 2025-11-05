#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;
    
    scanf("%d %d", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;

    if (b != 0) {
        quotient = (float)a / b;
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %.2f\n", quotient);  
    } else {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = undefined (division by zero)\n");
    }

    return 0;
}
