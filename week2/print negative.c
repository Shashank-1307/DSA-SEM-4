//print negative numbers in array
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    negative(arr,size);
    return 0;
}

void negative(int arr[], int size)
 {
    printf("Negative elements in the array: ");
    for (int i = 0; i < size; i++)
        {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

