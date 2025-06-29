// 6. Swap Values
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // With third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swap (with temp): a=%d b=%d\n", a, b);

    // Without third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (without temp): a=%d b=%d\n", a, b);

    return 0;
}