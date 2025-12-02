#include <stdio.h>
#define PI 3.1416
int main() {
    float r, area, circ;
    scanf("%f", &r);
    area = PI * r * r;
    circ = 2 * PI * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    return 0;
}
