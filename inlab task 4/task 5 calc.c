#include <stdio.h>
int main(){
    int num1,num2,ch,result;
    printf("Enter First number.....(only integers)\n");
    scanf("%d",&num1);
    printf("Enter second number.....(only integers)\n");
    scanf("%d",&num2);
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d",&ch);
    if(ch == 1){
        result = num1 + num2;
        printf("The answer is %d",result);
        }
    if(ch == 2){
        result = num1 - num2;
        printf("The answer is %d",result);
        }
    if(ch == 3){
        result = num1 * num2;
        printf("The answer is %d",result);
    }
    if(ch == 4){
        if(num2 == 0){
            printf("The answer is undefined");
        }
        else{
        result = num1 / num2;
        printf("The answer is %d",result);
        }

        }
        return 0;
    
}