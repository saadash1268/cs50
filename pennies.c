#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar Amount: ");
    int pennies = amount * 100;
    printf("Pennies: %i\n", pennies);
}