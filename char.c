#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree?\n");

    // Check whether user agreed 
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || 'N')
    {
        printf("Not agreed.\n");
    }
    
}

// ^ used single quote becuase it is a single character. 