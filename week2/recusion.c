//array sum using recursion
#include <stdio.h>

int arraysum(int arr[], int size)
 {
    if (size == 0)
    {
        return 0;
    }
     else
    {
        return arr[0] + arraysum(arr + 1, size - 1);
    }
}

int main()
{
    int arr[10],n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array 1:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = arraysum(arr,n);
    printf("Sum of elements in the array: %d\n", sum);
    return 0;
}

