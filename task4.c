#include <stdio.h>

int main(void)
{
int a;
   
    scanf("%d", &a); 

    if(a == 1 || a == 2 || a == 12) 
    {
        printf("winter\n");
    }
    
        else if(a == 3 || a == 4 || a == 5) 
        {
            printf("spring\n");
        }
            
            else if(a == 6 || a == 7 || a == 8) 
            {
                printf("summer\n");
            }
                
                else if(a == 9 || a == 10 || a == 11) 
                {
                    printf("autumn\n");
                }
    else
    {
        printf("Out of range\n");
    }

    return 0;
}
