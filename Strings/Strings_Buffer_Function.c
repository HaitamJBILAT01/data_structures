#include <stdio.h>
#include <string.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);
    clearBuffer(); // Clear the input buffer

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline (single statement approach)
    name[strcspn(name, "\n")] = '\0';

    printf("Age: %d, Name: %s\n", age, name);
    return 0;
}

