#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    switch (r) {
        case ADMIN: printf("Admin access granted"); break;
        case USER: printf("User access granted"); break;
        case GUEST: printf("Guest login"); break;
    }
    return 0;
}
