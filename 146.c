#include <stdio.h>

struct Date { int d, m, y; };

struct Employee {
    char name[20];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"John", 101, {1, 1, 2024}};

    printf("%s %d Joined: %d-%d-%d",
           e.name, e.id, e.join.d, e.join.m, e.join.y);

    return 0;
}
