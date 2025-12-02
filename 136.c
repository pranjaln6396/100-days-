#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a = 10, b = 5;
    printf("1.Add 2.Subtract 3.Multiply: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
        default: printf("Invalid");
    }
    return 0;
}
