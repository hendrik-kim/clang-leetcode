#include <stdio.h>
#include <assert.h>
#include "max_profit.h"

int main() {

    int prices[] = { 7, 1, 5, 3, 6, 4 };
    int prices2[] = { 2,4,1 };

    assert(max_profit(prices, 6) == 5);
    assert(max_profit(prices2, 3) == 2);

    return 0;
}