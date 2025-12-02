#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printf("\nStudent: %s %d %.2f", s.name, s.roll, s.marks);
    return 0;
}
