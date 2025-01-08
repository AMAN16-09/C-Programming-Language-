#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements :",n);
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
    sum += arr[i];
    }
    printf("The sum of the array is %d\n",sum);
    return 0;
}
