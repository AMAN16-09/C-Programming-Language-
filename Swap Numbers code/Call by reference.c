#include <stdio.h>
void swapx(int *x, int *y);
void swapx(int *x, int *y)
{
    int t;
    t = *x; 
    *x = *y; 
    *y = t;   
}
int main()
{
    int a = 10, b = 20;  
    swapx(&a, &b);
    printf("a=%d b=%d\n", a, b); 
    return 0;
}
