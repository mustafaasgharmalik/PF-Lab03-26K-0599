#include <stdio.h>
int main()
{
    int per;
    printf("Enter your percentage\n");
    scanf("%d", &per);
        if(per >= 90)
        {
            printf("Your grade is A");
        }
        else
        {
              if(per >= 85)
            {
            printf("Your grade is B");
            }
            else{
                    if(per >= 70)
                {
                    printf("Your grade is C");
                }
                else{
                        if(per >= 60)
                    {
                        printf("Your grade is D");
                    }
                        else{
                            if(per < 60)
                            {
                            printf("You are failed, visit office");
                            }
                        }
                }
            }
            
        }
        return 0;
}