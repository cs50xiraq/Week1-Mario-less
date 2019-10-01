#include <cs50.h>
#include <stdio.h>
int main(void)
    
{ 
    //1
  
    int n, h;
    do
    { 
        h = get_int("height :\n");
    
    }
    while (h < 1 || h > 8 );
   
        for ( int i = 0; i < h; i++)
    {
        for (int j = h - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = -1; k < i; k++)
            
        { 
            printf("#");   
        }
        printf("\n");
     
    }//i
}//1
