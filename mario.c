#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Enter the height of pyramid: ");
    }
    while (n <  1 || n > 8);
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");    
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
