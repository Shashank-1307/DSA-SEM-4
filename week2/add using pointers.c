//add 2 numbers using pointers
#include <stdio.h>

int main()
 {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int sum = addNumbers(&num1, &num2);
    printf("Sum of %d and %d is: %d\n", num1,num2,sum);
    return 0;
}

int addNumbers(int *num1, int *num2)
{
    return (*num1 + *num2);
}

