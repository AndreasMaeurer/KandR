/*
 * Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above. 
 */

/*
 * I guess basically this Exercise is asking you to Experiment what happens when you put:
 * \n
 * \t
 * \b
 * \"
 * \\ 
 */

#include <stdio.h>

int main(void)
{
    printf("Hello \" world \\ again");
    
    return 0;
}
