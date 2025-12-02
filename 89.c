#include <stdio.h>
#include <string.h>
int main() {
    char s[100],ch;
    fgets(s,100,stdin);
    scanf(" %c",&ch);
    int count=0;
    for(int i=0;s[i];i++) if(s[i]==ch) count++;
    printf("%d",count);
}
