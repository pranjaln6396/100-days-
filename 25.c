#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op) {
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/': if(b!=0) printf("%d\n", a/b); else printf("undefined\n"); break;
        case '%': if(b!=0) printf("%d\n", a%b); else printf("undefined\n"); break;
        default: printf("Invalid operation\n");
    }
    return 0;
}
