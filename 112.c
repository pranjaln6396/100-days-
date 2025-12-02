#include <stdio.h>
int main(){
    int n,a[100]; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max_sofar=a[0],curr=a[0];
    for(int i=1;i<n;i++){
        if(curr<0) curr=a[i]; else curr+=a[i];
        if(curr>max_sofar) max_sofar=curr;
    }
    printf("%d",max_sofar);
}
