#include <stdio.h>
int main() {
    int n, num = 1, den = 1;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++, num += 2, den += 2)
        sum += (float)num / den;
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
