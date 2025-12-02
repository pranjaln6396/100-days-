#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p = {"Jay", MALE};

    printf("Name: %s\nGender: %s", p.name,
           p.g == MALE ? "Male" : "Female");
    return 0;
}
