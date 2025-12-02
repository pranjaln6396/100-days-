#include <stdio.h>
#include <string.h>

struct Emp {
    char name[20];
    int id;
};

int main() {
    struct Emp a = {"Jay", 1};
    struct Emp b = {"Jay", 1};

    if (strcmp(a.name,b.name)==0 && a.id==b.id)
        printf("Identical");
    else
        printf("Not Identical");

    return 0;
}
