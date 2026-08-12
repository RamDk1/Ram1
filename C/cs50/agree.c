#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree?(n/y) ");
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed ");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed ");
    }

}