#include <stdio.h>
int main(){
    int n,x,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int i,idx=-1;
    for(i=0;i<n;i++) if(a[i]>=x){ idx=i; break; }
    printf("%d",idx);
}
