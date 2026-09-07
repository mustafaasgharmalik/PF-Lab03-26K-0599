#include <stdio.h>

int main() {
    double pi = 3.14159265358979;

    printf("2 decimal places:  %.2lf\n", pi);
    printf("4 decimal places:  %.4lf\n", pi);
    printf("6 decimal places:  %.6lf\n", pi);
    printf("10 decimal places: %.10lf\n", pi);

    return 0;
}