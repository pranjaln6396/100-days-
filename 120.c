#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200];
    fgets(s,200,stdin);
    int cap=1;
    for(int i=0;s[i];i++){
        if(cap && isalpha(s[i])){s[i]=toupper(s[i]); cap=0;}
        else s[i]=tolower(s[i]);
        if(s[i]=='.'||s[i]=='!'||s[i]=='?') cap=1;
    }
    printf("%s",s);
}
