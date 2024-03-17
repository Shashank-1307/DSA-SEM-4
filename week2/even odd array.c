//seperate even and odd
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
    evenodd(arr,size);
    return 0;
}

void evenodd(int arr[], int size)
{
    printf("Even numbers in the array: ");
    for (int i = 0; i < size; i++)
        {
        if (arr[i]%2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Odd numbers in the array: ");
    for (int i = 0; i < size; i++)
        {
        if (arr[i]%2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

