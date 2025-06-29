// 11. Electricity Bill
#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter total units: ");
    scanf("%d", &units);
    if (units <= 50)
        bill = units * 0.5;
    else if (units <= 100)
        bill = 50 * 0.5 + (units - 50) * 1.0;
    else if (units <= 150)
        bill = 50 * 0.5 + 50 * 1.0 + (units - 100) * 1.5;
    else if (units <= 200)
        bill = 50 * 0.5 + 50 * 1.0 + 50 * 1.5 + (units - 150) * 2.0;
    else
        bill = 50 * 0.5 + 50 * 1.0 + 50 * 1.5 + 50 * 2.0 + (units - 200) * 5.0;
    printf("Total bill: Rs %.2f\n", bill);
    return 0;
}