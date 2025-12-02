#include <stdio.h>
int main() {
    int n, prod = 1, hasOdd = 0;
    scanf("%d", &n);
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (!hasOdd) prod = 1; // No odd digits found
    printf("%d\n", prod);
    return 0;
}
