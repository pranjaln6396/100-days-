#include <stdio.h>
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}
