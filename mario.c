#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //define integer variable
    int height;
    //make condition to check it
    do 
    {
        height = get_int("Enter Height\n"); 
    }
    while ((height >    8) || (height <    1));
    //loop for rows
    for (int i = 0; i < height; i++)
    {
        //loop for spaces
        for (int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
            
        }
        //loop for comlomns
        for (int j = 0; j < i + 1; j++)
        {
           
            printf("#");
        }
        printf("\n");
    }

}

