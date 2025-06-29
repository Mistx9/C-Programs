// 22. Pattern 4x4 Rows of 1s and 0s
#include <stdio.h>
int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", i % 2 == 0);
        printf("\n");
    }
    return 0;
}