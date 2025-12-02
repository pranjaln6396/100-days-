#include <stdio.h>
int main(){
    int m,n,a[100],b[100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int j=0;j<n;j++) scanf("%d",&b[j]);
    int i=0,j=0;
    while(i<m&&j<n)
        if(a[i]<b[j]) printf("%d ",a[i++]);
        else printf("%d ",b[j++]);
    while(i<m) printf("%d ",a[i++]);
    while(j<n) printf("%d ",b[j++]);
}
