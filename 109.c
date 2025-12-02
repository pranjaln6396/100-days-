#include <stdio.h>
int main(){
    int n,k,a[100];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max=0,sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    max=sum;
    for(int i=k;i<n;i++){
        sum+=a[i]-a[i-k];
        if(sum>max) max=sum;
    }
    printf("%d",max);
}
