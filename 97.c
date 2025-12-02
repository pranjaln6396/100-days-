#include <stdio.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    if(s[0]!=' ') printf("%c",toupper(s[0]));
    for(int i=1;s[i];i++)
        if(s[i-1]==' ' && s[i]!=' ') printf("%c",toupper(s[i]));
}
