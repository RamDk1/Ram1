#include <stdio.h>

int main(void)
{
    float x;
    printf("Whats x? ");
    scanf(" %f", &x);

    float y;
    printf("Whats y? ");
    scanf(" %f", &y);

    printf(" %2f\n", x / y);
}