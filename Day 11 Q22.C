#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profit, loss;
    float profitPercentage, lossPercentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Profit = %.2f, Profit Percentage = %.2f%%\n", profit, profitPercentage);
    } 
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Loss = %.2f, Loss Percentage = %.2f%%\n", loss, lossPercentage);
    } 
    else {
        printf("No profit, no loss\n");
    }

    return 0;
}
