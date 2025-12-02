#include <stdio.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Result r = TIMEOUT;

    switch (r) {
        case SUCCESS: printf("Operation Successful"); break;
        case FAILURE: printf("Operation Failed"); break;
        case TIMEOUT: printf("Operation Timed Out"); break;
    }
    return 0;
}
