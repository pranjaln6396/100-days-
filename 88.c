#include <stdio.h>
int main() {
    char s[200];
    fgets(s,200,stdin);
    for(int i=0;s[i];i++)
        if(s[i]==' ') s[i]='-';
    printf("%s",s);
}
