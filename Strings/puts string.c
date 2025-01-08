#include <stdio.h>
int main() 
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("You name is:");
    puts(name);
    return 0;
}
