#include <stdio.h>
int main()
{
    int l, b, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);
    perimeter = 2*(l + b);
    printf("The perimeter of the rectangle is: %d", perimeter);
    return 0;
}
