//print second largest number
#include <stdio.h>

int main()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int inputArray[100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &inputArray[i]);
    }
    int secondLargest = findSecondLargest(inputArray, size);
    printf("Second largest number in the array: %d\n", secondLargest);
    return 0;
}

int findSecondLargest(int arr[], int size)
 {
    int firstLargest, secondLargest;


    if (arr[0] > arr[1])
    {
        firstLargest = arr[0];
        secondLargest = arr[1];
    } else {
        firstLargest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < size; i++)
        {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest)
         {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

