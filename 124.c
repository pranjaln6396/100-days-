#include <stdio.h>

int main() {
    char src[100], dest[100], ch;
    FILE *fpr, *fpw;

    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    fpr = fopen(src, "r");
    if (fpr == NULL) {
        printf("Source file doesn't exist.\n");
        return 1;
    }
    fpw = fopen(dest, "w");
    if (fpw == NULL) {
        printf("Error opening destination file.\n");
        fclose(fpr);
        return 1;
    }
    while ((ch = fgetc(fpr)) != EOF) {
        fputc(ch, fpw);
    }
    fclose(fpr);
    fclose(fpw);
    printf("File copied successfully.\n");
    return 0;
}
