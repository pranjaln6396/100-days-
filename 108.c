#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++) if(i!=j) prod*=a[j];
        printf("%d ",prod);
    }
}
