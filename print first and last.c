//first and last number
#include<stdio.h>
int main()
{
    int n,first,last;

    printf("Enter a number\n");
    scanf("%d", &n);
    last = n %10;

    while (n>=10)
    {
        n=n/10;
    }
    first = n;
    printf("First digit is %d\n", first);
    printf("Last digit is %d\n", last);
}
