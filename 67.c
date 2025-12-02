#include <stdio.h>
int main() {
    int n, pos, ele;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &ele, &pos);
    for(int i=n-1; i>=pos; i--)
        arr[i+1] = arr[i];
    arr[pos] = ele;
    for(int i=0; i<=n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
