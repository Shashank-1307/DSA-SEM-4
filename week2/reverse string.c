//reverse string
#include <stdio.h>
#include <string.h>
void reverse(char str[]);


int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

void reverse(char str[])
{
    int length= strlen(str);
    int start= 0;
    int end= length-1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

