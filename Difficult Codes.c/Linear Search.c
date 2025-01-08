#include <stdio.h> 
int main()  
{ 
    int array[100], search, c, n; 
 
    printf("Enter number of elements in array: ");  
    scanf("%d", &n); 
 
    if (n <= 0 || n > 100)  
    { 
        printf("Invalid input! The array size must be between 1 and 100.\n"); 
        return 1; 
    } 
 
    printf("Enter %d integer(s):\n", n); 
    for (c = 0; c < n; c++)  
    { 
        scanf("%d", &array[c]); 
    } 
 
    printf("Enter a number to search: "); 
    scanf("%d", &search); 
 
    for (c = 0; c < n; c++)  
    { 
        if (array[c] == search)  
        { 
            printf("%d is present at index %d.\n", search, c); 
            break; 
        } 
    } 
 
    if (c == n)  
    { 
        printf("%d isn't present in the array.\n", search); 
    } 
 
    return 0; 
}
