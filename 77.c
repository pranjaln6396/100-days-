#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    bool distinct = true;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(mat[i][i] == mat[j][j]) {
                distinct = false;
                break;
            }
    printf("%s\n", distinct ? "True" : "False");
    return 0;
}
