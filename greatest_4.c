// 9. Greatest of Four
#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    printf("Greatest: %d\n", max);
    return 0;
}