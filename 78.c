#include <stdio.h>
int main() {
    int n, sum=0;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j)
                sum += mat[i][j];
        }
    printf("%d\n", sum);
    return 0;
}
