#include <stdio.h>

int main() 
{
    int n;
    float sum = 0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("The sum of all elements is: %.2f\n", sum);
    printf("The average of all elements is: %.2f\n", average);

    return 0;
}
