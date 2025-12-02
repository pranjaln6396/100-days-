#include <stdio.h>
int main(){
    int n,a[100],sum=0,left=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); sum+=a[i]; }
    for(int i=0;i<n;i++){
        if(left==sum-left-a[i]){ printf("%d",i); return 0; }
        left+=a[i];
    }
    printf("-1");
}
