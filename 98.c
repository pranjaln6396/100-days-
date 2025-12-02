#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[100][50];
    int n=0;
    while(scanf("%s",s[n])!=EOF) n++;
    for(int i=0;i<n-1;i++)
        printf("%c",toupper(s[i][0]));
    printf("%s",s[n-1]);
}
