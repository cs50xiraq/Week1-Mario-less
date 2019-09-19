#include <stdio.h>
#include <cs50.h>
int main(void)
{
    /*declaring the "height" variable to begin with our pyramid , it should be valid positive number
     *and should be :(equal or more than 0 and less or equal to 23 ) . 
     */
    int height ;
    do
    {
        height = get_int("Enter the desired height of the pyramid: ");
        //will repeat until the specified height is entered by the user.
    }
    while (!(height > 0 && height < 9));
    //Creating the shape of the pyramid.
    for (int loop = 1 ; loop <= height ; loop++)
    {
        // this loop is for the height of the pyramid in general .
        for (int blank = height ; blank > loop ; blank--)
        {
            /*This loop is for the "Blank" pyramid or "Only spaces" pyramid. 
             * Will iterate in the reverse . 
             */
            printf(" ");
        }
        for (int pyr1 = 0 ; pyr1 < loop ; pyr1++)
        {
            /*This loop is for creating the left side of the pyramid .
             * the "sharp" shape will be incremented by "one" every new line will be made.
             */
            printf("#");
        }
        printf("\n");
    }
    
    
    
}
