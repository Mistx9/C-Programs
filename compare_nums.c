// 4. Compare Numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("Equal\n");
    else if (a > b)
        printf("First is greater\n");
    else
        printf("Second is greater\n");
    return 0;
}