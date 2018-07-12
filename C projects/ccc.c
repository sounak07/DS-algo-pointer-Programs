#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin); 
    printf("Your Name is: %s", name);
    return 0;
}
