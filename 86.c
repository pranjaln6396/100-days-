#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",s);
    int l=0,r=strlen(s)-1,flag=1;
    while(l<r){ if(s[l++]!=s[r--]){flag=0;break;} }
    printf(flag?"Palindrome":"Not palindrome");
}
