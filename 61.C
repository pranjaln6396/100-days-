#include <stdio.h>
int main() {
    int n, key, found_index = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found_index = i;
            break;
        }
    }
    printf("%d\n", found_index);
    return 0;
}
