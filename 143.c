#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    for (int i=0;i<5;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    int max = 0;
    for (int i=1;i<5;i++)
        if (s[i].marks > s[max].marks)
            max = i;

    printf("Topper: %s %.2f", s[max].name, s[max].marks);
    return 0;
}
