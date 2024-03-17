//switch case with range
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number (0-30)\n ");
    scanf(" %d", &num);

    switch (num)
    {
        case 0 ... 10:
            printf("Number is between 0 and 10\n");
            break;
        case 11 ... 20:
            printf("Number is between 11 and 20\n");
            break;
        case 21 ... 30:
            printf("Number is between 21 and 30\n");
            break;

        default:
            printf("Out of range\n");
    }
}
