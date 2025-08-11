#include <stdio.h>
#include <limits.h>

int main() {
    int stockPrices[] = {25, 20, 18, 22, 28, 19, 21, 15};
    int n = sizeof(stockPrices) / sizeof(stockPrices[0]);
    int initialPrice = stockPrices[0];
    int minLossOrMaxProfit = INT_MAX;
    int bestMonth = -1;
    printf("Initial purchase price: %d\n", initialPrice);
    for (int i = 1; i < n; i++) {
        int currentDifference = stockPrices[i] - initialPrice;
        printf("Month %d: Price %d, Difference: %d\n", i + 1, stockPrices[i], currentDifference);
        if (currentDifference < minLossOrMaxProfit) {
            minLossOrMaxProfit = currentDifference;
            bestMonth = i + 1;
        }
    }
    printf("\n");
    if (minLossOrMaxProfit >= 0) {
        printf("The best month to sell for maximum profit is month %d, with a profit of: %d\n", bestMonth, minLossOrMaxProfit);
    } else {
        printf("The best month to sell for minimum loss is month %d, with a loss of: %d\n", bestMonth, minLossOrMaxProfit);
    }
    return 0;
}