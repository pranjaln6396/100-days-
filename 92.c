#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int freq[26]={0};
    scanf("%s",s);
    for(int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'){
            if(freq[s[i]-'a']==1){ printf("%c",s[i]); return 0;}
            freq[s[i]-'a']++;
        }
    }
    printf("No repetition");
}
