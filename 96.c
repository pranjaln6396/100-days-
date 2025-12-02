#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    fgets(s,200,stdin);
    int start=0;
    for(int i=0; ;i++){
        if(s[i]==' '||s[i]=='\0'||s[i]=='\n'){
            for(int j=i-1;j>=start;j--) printf("%c",s[j]);
            if(s[i]==' '){ printf(" "); start=i+1; }
            else break;
        }
    }
}
