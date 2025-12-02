#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int prev=-1;
        for(int j=i-1;j>=0;j--) if(a[j]>a[i]){prev=a[j];break;}
        printf("%d",prev);
        if(i<n-1) printf(", ");
    }
}
