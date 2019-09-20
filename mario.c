#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int i, j, hight = 0, n; //this is variable
    int user_input_height = get_int("enter user_input_height");//masseg for user
    while (user_input_height < 1 || user_input_height > 8) 
    {
        user_input_height = get_int("enter user_input_height");//if user entered wrong value this masseg will appear
    }

    for (i = 1 ; i <= user_input_height ; i++) //this is nested for 
    {
        for (j = user_input_height - i ; j > 0 ; j--)
        {
            printf(" ");
        }
        n = 1;
        do
        {
            printf("#");
            n++;
        }
        while (n <= i);
                
        printf("\n");
    }
    
}
