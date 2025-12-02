#include <stdio.h>
int main(){
    int n,target,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);
    int first=-1,last=-1;
    for(int i=0;i<n;i++)
        if(a[i]==target){ if(first==-1) first=i; last=i;}
    printf("%d,%d",first,last);
}
