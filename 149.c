#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student *p = malloc(sizeof(struct Student));

    printf("Enter name roll: ");
    scanf("%s %d", p->name, &p->roll);

    printf("Stored: %s %d", p->name, p->roll);

    free(p);
    return 0;
}
