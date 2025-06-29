// 5. Average of Numbers
#include <stdio.h>
int main() {
    int n, i;
    float num, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &num);
        sum += num;
    }
    printf("Average: %.2f\n", sum/n);
    return 0;
}
