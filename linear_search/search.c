#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20,500,10,5,100,1,50};
    int num = get_int("enter a number ");

    for (int i = 0; i < 7; i++)
    {
        if(num == numbers[i])
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}