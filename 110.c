#include <stdio.h>
int max(int a[],int s,int e){int m=a[s];for(int i=s;i<e;i++) if(a[i]>m)m=a[i];return m;}
int main(){
    int n,k,a[100]; scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<=n-k;i++) printf("%d ",max(a,i,i+k));
}
