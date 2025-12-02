#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    scanf("%s%s",a,b);
    if(strlen(a)!=strlen(b)){printf("Not rotation");return 0;}
    char temp[200];
    strcpy(temp,a);
    strcat(temp,a);
    if(strstr(temp,b)) printf("Rotation");
    else printf("Not rotation");
}
