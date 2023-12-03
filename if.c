#include <cs50.h>
#include <stdio.h>

if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else 
{
    printf("x is equal to y\n");
}

// ^ boolean expression in parentheses ()


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else 
    {
        printf("You lost the same number of points as me.\n");
    }
}

// Refactored below

int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else 
    {
        printf("You lost the same number of points as me.\n");
    }
}