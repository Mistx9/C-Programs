// 12. Currency Notes
#include <stdio.h>
int main() {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 10; i++) {
        if (amount >= notes[i]) {
            int count = amount / notes[i];
            amount %= notes[i];
            printf("%d x %d\n", notes[i], count);
        }
    }
    return 0;
}