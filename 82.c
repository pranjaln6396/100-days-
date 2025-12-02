#include <stdio.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c\n", str[i]);
    return 0;
}
