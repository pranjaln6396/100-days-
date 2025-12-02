#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    FILE *fp = fopen("students.txt", "w+");
    struct Student s;
    
    // Write 3 sample records
    fprintf(fp, "John 101 85.5\n");
    fprintf(fp, "Jane 102 92.0\n");
    fprintf(fp, "Bob 103 78.5\n");
    rewind(fp);
    
    // Read and display
    while (fscanf(fp, "%s %d %f", s.name, &s.roll_no, &s.marks) == 3) {
        printf("%s - Roll: %d, Marks: %.1f\n", s.name, s.roll_no, s.marks);
    }
    fclose(fp);
    return 0;
}
