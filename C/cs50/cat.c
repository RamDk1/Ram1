#include <stdio.h>

void meow (void)
{
    printf("meow\n");
}


int main(void)
{
    int n;
    while (1)
    {
        
        printf("What's n? ");
        scanf(" %d", &n);

        if (n >= 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        meow();
    }
}