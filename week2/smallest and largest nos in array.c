//largest number in an array
#include <stdio.h>
int findLargest(int arr[], int size);

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("Largest number in the array: %d\n", largest);

    return 0;
}



int findLargest(int arr[], int n)
 {
    int largest = arr[10];
    for (int i = 1; i < n; i++)
        {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

