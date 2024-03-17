//find length of string
#include <stdio.h>
#include<string.h>
int strlength(char str[]);
int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);
    int length=strlength(string);
    printf("Length of the string is: %d\n", length);
    return 0;
}
int strlength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

