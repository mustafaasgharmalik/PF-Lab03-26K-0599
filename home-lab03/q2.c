#include <stdio.h>
#include <stdbool.h>

int main()
{
    char chrvar = 'A';
    float fltvar = 123.123f;
    int intvar = 111;
    bool boolvar = true;

    printf("the integer variable is %d \n",intvar);
    printf("the integer variable of only one decimal place is %1d \n",intvar);
    printf("the float variable ins %.3f \n",fltvar);
    printf("the boolean variable is %s \n",boolvar ? "true" : "false");
    printf("the character variable is %c \n",chrvar);

    return 0;
}