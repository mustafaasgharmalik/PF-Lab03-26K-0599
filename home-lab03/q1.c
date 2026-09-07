#include <stdio.h>
#include <stdbool.h>

int main() {
    int intVar = 42;
    float floatVar = 3.14f;
    double doubleVar = 2.7182818284;
    char charVar = 'A';
    bool boolVar = true;

    printf(" integer value is: %d and the size is: %zu \n",intVar, sizeof(intVar));
    printf(" float value is: %f and the size is: %zu \n",floatVar,sizeof(floatVar));
    printf(" double value is: %f and the size is: %zu \n",doubleVar,sizeof(doubleVar));
    printf(" char value is: %c and the size is: %zu \n",charVar,sizeof(charVar));
    printf(" bool value is: %d and the size is: %zu \n",boolVar,sizeof(boolVar));
    return 0;
}