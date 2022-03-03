#include <stdio.h>

// declaring function
void meow(int n);

int main(void)
{
    meow(3);
}

// define meow function
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}