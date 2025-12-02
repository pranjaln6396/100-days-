#include <stdio.h>
int main() {
    int n = 5, i, j;
    // upper half
    for(i = 1; i <= n; i += 2) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    // lower half
    for(i = n - 2; i >= 1; i -= 2) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
