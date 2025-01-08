#include <stdio.h>

void bubbleSort(int array[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
