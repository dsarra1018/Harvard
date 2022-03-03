#include <stdio.h>

// declaring function
void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// define meow function
void meow(void)
{
    printf("meow\n");
}