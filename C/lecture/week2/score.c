#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];

    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");
    

    printf("Average: %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}