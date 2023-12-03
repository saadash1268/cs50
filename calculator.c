#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
   int x = get_int("x: ");
   // Prompt user for y
   int y = get_int("y: ");
   // Perform addition
   printf("%i\n", x + y);
}

// ^ change int to long and %i to %li to get larger numbers still limited by bit, but still an issue further down the line for bigger numbers



