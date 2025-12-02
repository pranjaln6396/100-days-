#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    fgets(s,100,stdin);
    int n=strlen(s);
    if(s[n-1]=='\n') s[n-1]='\0';
    n=strlen(s);
    for(int i=n-1;i>=0;i--) printf("%c",s[i]);
}
