#include <stdio.h>
#include "max_profit.h"

int max_profit(int* prices, int prices_size) {
    int max_profit = 0;
    int min_price = prices[0];

    size_t i;

    for (i = 0; i < prices_size; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
        else {
            if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
    }

    return max_profit;
}