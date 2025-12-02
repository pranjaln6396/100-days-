#include <stdio.h>
int main() {
    int n, sum = 0, val = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++, val+=2)
        sum += val;
    printf("%d\n", sum);
    return 0;
}
