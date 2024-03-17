//create and initialize a pointer
#include <stdio.h>

int main()
{

    int value=13 ;
    float *ptr = &value;
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", ptr);

    return 0;
}
