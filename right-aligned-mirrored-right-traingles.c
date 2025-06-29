// 23. Right-aligned Triangle with Mirror Pattern
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j > i; j--)
            printf("  ");
        for (int k = 1; k <= i; k++)
            printf("%d ", k);
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--)
            printf("  ");
        for (int k = 1; k <= i; k++)
            printf("%d ", k);
        printf("\n");
    }
    return 0;
}
