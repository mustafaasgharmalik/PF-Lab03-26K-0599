#include <stdio.h>
int main()
{
    int num1;
    printf("Enter any year \n");
    scanf("%d",&num1);
    if(num1%4 == 0 && num1%100 != 0)
        {
            printf("%d is a leap year",num1);
        }
        else{
            printf("%d is not a leap year",num1);
        }
        return 0;
}