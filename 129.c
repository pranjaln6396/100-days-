#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    int num, count = 0;
    double sum = 0, avg;
    
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    
    if (count > 0) {
        avg = sum / count;
        printf("Sum: %.2f, Average: %.2f\n", sum, avg);
    }
    return 0;
}
