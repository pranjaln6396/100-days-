#include <stdio.h>

struct Emp {
    char name[20];
    int id;
};

int main() {
    struct Emp e1 = {"Jay", 101}, e2;

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Read: %s %d", e2.name, e2.id);
    return 0;
}
