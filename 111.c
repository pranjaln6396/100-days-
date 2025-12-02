#include <stdio.h>
int main(){
    int n,k,a[100]; scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<=n-k;i++){
        int found=0;
        for(int j=i;j<i+k;j++) if(a[j]<0){printf("%d ",a[j]);found=1;break;}
        if(!found) printf("0 ");
    }
}
