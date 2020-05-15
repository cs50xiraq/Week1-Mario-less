# Week1-Mario-less
#include <stdio.h>
#include <cs50.h>

int main()
{ 
    int n; 
    do 
    {
        n = get_int("inter the hight of pyramid: "); 
    } 
    while (n < 1 || n > 8);
    int x, y ;
    //main loop for increasing x and stopping condition is that x will be equal to n and make new line after each loop 
    for (x = 0; x < n; x++)
    {
        //the second loop to make a condition in it for pront " " or "#"
        for (y = n;  y > 0; --y)
        {
            // a condition discribe our need to buled space equal to n num - x (x in each loop the num of it will be increased)
            if (y - 1 > x)
            {
                printf(" "); 
            }
            //if the condition is false then print "#"
            else
            {
                   
                printf("#");  
            }
        }
        printf("\n");
    }
    return 0;
} 

