// 21. Square Matrix of Same Element
#include <stdio.h>
int main() {
    int n, val;
    printf("Enter size and element: ");
    scanf("%d %d", &n, &val);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", val);
        printf("\n");
    }
    return 0;
}
