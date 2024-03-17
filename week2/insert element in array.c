//insert element in an array
#include <stdio.h>
void insertElement(int arr[], int n, int pos, int element);

int main()
 {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i<n; i++)
        {
        scanf("%d", &arr[i]);
    }

    int pos, element;
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(arr,n,pos, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void insertElement(int arr[], int n, int pos, int element)
{

    for (int i = n-1; i >=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos]=element;
    n++;
}


