#include <stdio.h>
int main() {
    int n, ele, pos = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &ele);
    for(int i=0; i<n; i++) {
        if(arr[i] == ele) {
            pos = i;
            break;
        }
    }
    if(pos == -1) {
        for(int i=0; i<n; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return 0;
    }
    for(int i=pos; i<n-1; i++)
        arr[i] = arr[i+1];
    for(int i=0; i<n-1; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
