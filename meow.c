#include <stdio.h>

// int main(void) 
// {
//     printf("Meow\n");
//     printf("Meow\n");
//     printf("Meow\n");
// 
// }

/*in terminal to log "Meow"; make meow, ./meow */

// while loop
// int i = 0;
// while (i < 3)
// {
//     printf("meow\n");
//     i++;
// }

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("meow\n");
//     }
// }

void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf ("meow\n");
    }
}


// progressio of code into function with prototype and for loop 