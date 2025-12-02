#include <stdio.h>
#include <string.h>
int main(){
    char s[200], word[50], max[50]="";
    fgets(s,200,stdin);
    int i=0;
    while(sscanf(s+i,"%s",word)==1){
        if(strlen(word)>strlen(max)) strcpy(max,word);
        i+=strlen(word);
        while(s[i]==' ') i++;
        if(!s[i]) break;
    }
    printf("%s",max);
}
