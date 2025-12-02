#include <stdio.h>
int main(){
    int n,a[100]; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++) if(a[i]==a[j]) c++;
        if(c>n/2){ printf("%d",a[i]); return 0; }
    }
    printf("-1");
}
