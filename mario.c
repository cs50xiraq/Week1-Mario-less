#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("height : ");

    while (h > 8 || h <= 0)
    {
        h = get_int("error put another number :");
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h - 1 - i; j++)
        {
            printf(" ");
        }
        for (int s = 0; s < i + 1; s++) 
        {
            printf("#");
       
        }     
        printf("\n");
      
      
    }
  
    
  
 
}

   




