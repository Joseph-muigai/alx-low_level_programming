#include <stdio.h>
/**
    *p -prints before main function is executed
*/

void p(void) __attribute__((constructor));

void p(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}