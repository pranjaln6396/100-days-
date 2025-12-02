#include <stdio.h>
#include <string.h>
int main(){
    char s[200]; scanf("%s",s);
    int start=0,max=0,idx[256];
    for(int i=0;i<256;i++) idx[i]=-1;
    for(int i=0;i<strlen(s);i++){
        if(idx[(unsigned char)s[i]]>=start) start=idx[(unsigned char)s[i]]+1;
        idx[(unsigned char)s[i]]=i;
        if(i-start+1>max) max=i-start+1;
    }
    printf("%d",max);
}
