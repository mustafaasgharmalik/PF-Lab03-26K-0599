#include <stdio.h>

int main() {
    char fullName[50];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Your name is: ");
    puts(fullName);

    return 0;
}