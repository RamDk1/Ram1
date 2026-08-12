#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Whats your name? ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s\n", name);
    
}