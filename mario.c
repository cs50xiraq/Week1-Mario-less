include <stdio.h> //library initialization
#include <cs50.h>

int main(void)
{
   int n;
   do // to prompts the user for a positive integer
    {
         n = get_int("Enter the height of the pyramid: "); //get an integer
    }
    while (n < 0 || n > 8);

    // for loops specifying number of spaces and hashes per line
    for (int i = 0; i < n; i++)
    {

        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j < i + 2; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

