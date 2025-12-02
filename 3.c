#include <stdio.h>
int main() {
    int l, b, area, peri;
    scanf("%d %d", &l, &b);
    area = l * b;
    peri = 2 * (l + b);
    printf("Area=%d, Perimeter=%d\n", area, peri);
    return 0;
}
