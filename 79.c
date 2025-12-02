#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &mat[i][j]);
    for(int k=0; k<r+c-1; k++) {
        for(int i=0; i<=k; i++) {
            int j = k - i;
            if(i < r && j < c)
                printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
    return 0;
}
