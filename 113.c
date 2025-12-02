#include <stdio.h>
void sort(int a[],int n){for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++)if(a[i]>a[j]){int t=a[i];a[i]=a[j];a[j]=t;}}
int main(){
    int n,k,a[100]; scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,n);
    printf("%d",a[k-1]);
}
