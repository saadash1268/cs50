#include <stdio.h>
/* ^ header file. Tells compiler to load library (standard I/0) so the compiler knows what printf is. Another example is cs50 library for get_string, get_int etc. stdio.h (corresponding header file) has menu of functions including printf. cs50 library has its own header file cs50.h. 
Library provides all of the funtionality, header file is the specific mechanism via which you include it.  */



int main(void)
{
    printf("hello, world\n");
}

int main(void)
{
    string answer = get_string("What's your name?");
    printf("hello, %s\n", answer);
}


