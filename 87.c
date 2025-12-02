#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    fgets(s,200,stdin);
    int sp=0,d=0,spec=0;
    for(int i=0;s[i];i++){
        if(s[i]==' ') sp++;
        else if(isdigit(s[i])) d++;
        else if(!isalpha(s[i])) spec++;
    }
    printf("Spaces:%d Digits:%d Special:%d",sp,d,spec);
}
