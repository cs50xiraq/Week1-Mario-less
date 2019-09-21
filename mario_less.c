#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int height_of_stair, space, hashcount = 0;
    do
    {
        //enter the height of the stair must postive number and less than 9
        height_of_stair = get_int("enter the number= ");
    }
    while (height_of_stair <= 0 || height_of_stair > 8);
    space = height_of_stair - 1;
    int j;
    // loop that indicate the row
    for (int i = 0; i < height_of_stair ; i++)
    {
        //loop for spaces
        for (j = space; j > 0; j--)
        {
            printf(" ");
        }
        // counter of the spaces
        space--;
        hashcount++;
        for (j = 0; j < hashcount ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
