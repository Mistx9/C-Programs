// 14. First N Numbers
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}