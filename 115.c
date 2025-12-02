#include <stdio.h>
#include <string.h>
int main(){
    char s[100],t[100]; scanf("%s%s",s,t);
    int freq[26]={0};
    for(int i=0;s[i];i++) freq[s[i]-'a']++;
    for(int i=0;t[i];i++) freq[t[i]-'a']--;
    for(int i=0;i<26;i++) if(freq[i]){printf("Not Anagram");return 0;}
    printf("Anagram");
}
