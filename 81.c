#include <stdio.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);
    int count = 0;
    while(str[count] != '\0' && str[count] != '\n')
        count++;
    printf("%d\n", count);
    return 0;
}
