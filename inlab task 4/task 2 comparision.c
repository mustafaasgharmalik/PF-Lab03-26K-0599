#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    printf("Enter third number\n");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3){
        printf("%d is the largest",num1);
                }
        if(num2 > num1 && num2 > num3){
        printf("%d is the largest",num2);
                }
        if(num3 > num2 && num3 > num1){
        printf("%d is the largest",num3);
                }

    return 0;
}