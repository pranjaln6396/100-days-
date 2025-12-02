#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

void printStu(struct Student s) {
    printf("%s %d", s.name, s.roll);
}

int main() {
    struct Student s = {"Jay", 10};
    printStu(s);
    return 0;
}
