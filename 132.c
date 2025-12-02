#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic t = RED;

    if (t == RED) printf("Stop");
    else if (t == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
