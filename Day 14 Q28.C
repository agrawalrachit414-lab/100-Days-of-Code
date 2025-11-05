#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long to handle large numbers
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    return 0;
}
