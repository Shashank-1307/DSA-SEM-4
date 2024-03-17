//freq of occurrence
#include <stdio.h>
int findFrequency(int arr[], int size, int target);

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

    int target;

    printf("Enter the element to find the frequency: ");
    scanf("%d", &target);
    int frequency = findFrequency(inputArray, size, target);
    printf("Frequency of %d in the array: %d\n", target, frequency);

    return 0;
}


int findFrequency(int arr[],int size,int target)
{
    int frequency = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            frequency++;
        }
    }

    return frequency;
}

