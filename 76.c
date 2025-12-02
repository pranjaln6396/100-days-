#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    bool symmetric = true;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(mat[i][j] != mat[j][i]) {
                symmetric = false;
                break;
            }
    printf("%s\n", symmetric ? "True" : "False");
    return 0;
}
