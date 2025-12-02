#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

  
    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

  
