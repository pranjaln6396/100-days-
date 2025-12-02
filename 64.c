#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int freq[10] = {0};
    while(n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int max_freq = 0, digit = 0;
    for(int i=0; i<10; i++) {
        if(freq[i] > max_freq) {
            max_freq = freq[i];
            digit = i;
        }
    }
    printf("%d\n", digit);
    return 0;
}
