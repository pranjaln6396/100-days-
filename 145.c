#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    int max = 0;
    for (int i=1;i<n;i++)
        if (s[i].marks > s[max].marks)
            max = i;
    return s[max];
}

int main() {
    struct Student arr[3] = {
        {"A",1,60},
        {"B",2,75},
        {"C",3,90}
    };

    struct Student t = getTop(arr, 3);
    printf("Topper: %s %.2f", t.name, t.marks);
    return 0;
}
