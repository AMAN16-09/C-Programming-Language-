#include <stdio.h>
int main() 
{
    int n, multiply;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) 
    {
        multiply *= i;
    }
    printf("multiplication of first %d natural numbers is: %d\n", n, multiply);
    return 0;
}
