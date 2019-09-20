#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Enter height: "); //Give the height of mario
    bool flag = true;
    int l = 1;
    while (flag)
    {
        if (height >= 1 && height <= 8)    // make sure the the height between 1and 8
        {  
            flag = false;
            for (int i = 0; i < height; i++)  // loop for columns
            {
                for (int j = 0; j < height; j++)  //loop for rows
                {
                    if (j < height - l)
                    { 
                        printf(" ");
                    }
                    else
                    {
                        printf("#");
                    }
                }
                printf("\n");
                l++;
            }
        } 
        else 
        {
            height = get_int("re-Enter height: ");
        }
    }
}
