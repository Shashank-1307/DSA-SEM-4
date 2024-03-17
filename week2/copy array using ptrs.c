//copy string using pointers
#include <stdio.h>

void copy(int *destination,int *source, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(destination+i) = *(source+i);
    }
}

int main()
{
    int source[] = {1,2,3,4,5};
    int destination[5];

    copy(destination,source,5);

    printf("Source Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", source[i]);
    }

    printf("\nCopied Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", destination[i]);
    }
    return 0;
}
